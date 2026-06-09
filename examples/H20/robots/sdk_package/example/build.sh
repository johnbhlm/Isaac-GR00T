#!/bin/bash

# 设置严格模式
set -euo pipefail

# 颜色定义
RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
NC='\033[0m' # No Color

# 获取脚本所在目录
workdir=$(cd "$(dirname "${BASH_SOURCE[0]}")" &> /dev/null && pwd)

print_info() {
    echo -e "${GREEN}[INFO]${NC} $1"
}

print_warn() {
    echo -e "${YELLOW}[WARN]${NC} $1"
}

print_error() {
    echo -e "${RED}[ERROR]${NC} $1"
    exit 1
}

# 清理并准备构建目录
prepare_build_dir() {
    local build_type=$1
    local build_dir="$workdir/build/$build_type"
    
    # 清理旧目录
    if [ -d "$build_dir" ]; then
        print_warn "清理旧构建目录: $build_dir"
        rm -rf "$build_dir"
    fi
    
    # 创建新目录
    mkdir -p "$build_dir"
    print_info "创建构建目录: $build_dir"
    
    # 只返回路径，不包含任何其他文本
    echo "$build_dir"
}

# 配置CMake
configure_cmake() {
    local build_dir=$1
    local build_type=$2
    
    cd "$build_dir"
    
    print_info "配置 $build_type CMake 项目"
    
    # 设置CMake参数
    case $build_type in
        "h10w")
            cmake_args="-DH10W=ON -DH2X=OFF"
            ;;
        "h2x")
            cmake_args="-DH10W=OFF -DH2X=ON"
            ;;
        *)
            print_error "未知的构建类型: $build_type"
            ;;
    esac
    
    # 执行CMake
    if ! cmake "$workdir" $cmake_args; then
        print_error "$build_type CMake 配置失败"
    fi
    
    print_info "$build_type CMake 配置成功"
}

# 执行构建
execute_build() {
    local build_dir=$1
    local build_type=$2
    
    cd "$build_dir"
    
    print_info "开始构建 $build_type"
    
    # 获取CPU核心数
    cpu_cores=$(nproc 2>/dev/null || sysctl -n hw.ncpu 2>/dev/null || echo 4)
    
    # 执行make
    if ! make -j$cpu_cores; then
        print_error "$build_type 构建失败"
    fi
    
    print_info "$build_type 构建成功"
}

# 执行安装
execute_install() {
    local build_dir=$1
    local build_type=$2
    
    cd "$build_dir"
    
    print_info "开始安装 $build_type"
    
    if ! make install; then
        print_error "$build_type 安装失败"
    fi
    
    print_info "$build_type 安装成功"
}

# 构建单个项目
build_project() {
    local build_type=$1
    
    echo "========================================"
    print_info "开始构建 $build_type"
    echo "========================================"
    
    # 准备构建目录 - 使用子shell捕获纯路径
    local build_dir
    build_dir=$(prepare_build_dir "$build_type" | tail -n1)
    
    # 再次确认路径是干净的
    # 去除可能的颜色代码和换行符
    build_dir=$(echo "$build_dir" | tr -d '\n\r' | sed 's/\x1b\[[0-9;]*m//g')
    
    # 配置CMake
    configure_cmake "$build_dir" "$build_type"
    
    # 执行构建
    execute_build "$build_dir" "$build_type"
    
    # 执行安装
    execute_install "$build_dir" "$build_type"
    
    echo "========================================"
    print_info "$build_type 构建完成"
    echo "========================================"
    echo
}

# 主函数
main() {
    print_info "构建脚本启动"
    print_info "工作目录: $workdir"
    
    # 检查必要工具
    if ! command -v cmake &> /dev/null; then
        print_error "CMake 未安装，请先安装 CMake"
    fi
    
    if ! command -v make &> /dev/null; then
        print_error "Make 未安装，请先安装 Make"
    fi
    
    # 构建目标列表
    build_targets=("h10w" "h2x")
    
    print_info "构建目标: ${build_targets[*]}"
    
    # 依次构建每个目标
    for project in "${build_targets[@]}"; do
        build_project "$project"
    done
    
    print_info "所有构建任务完成 ✓"
    print_info "安装目录: $workdir/install"
    print_info "构建目录: $workdir/build"
}

# 运行主函数
main "$@"