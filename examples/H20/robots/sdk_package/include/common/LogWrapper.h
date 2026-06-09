
// LogWrapper.h
#pragma once
#include <stddef.h>
#include <stdarg.h>
#include <string.h>

// 定义跨平台导出宏
#if defined(_WIN32) || defined(_WIN64)
#ifdef LOGWRAPPER_EXPORTS
#define LOGWRAPPER_API __declspec(dllexport)
#else
#define LOGWRAPPER_API __declspec(dllimport)
#endif
#else
#define LOGWRAPPER_API __attribute__((visibility("default")))
#endif

// 日志级别枚举
typedef enum { LOG_TRACE, LOG_DEBUG, LOG_INFO, LOG_WARNING, LOG_ERROR, LOG_CRITICAL } LogLevel;

//----- C 接口声明 -----
#ifdef __cplusplus
extern "C" {
#endif

LOGWRAPPER_API void init_logger(int mode, const char* log_path, size_t max_size, size_t max_files);
LOGWRAPPER_API void log_message(LogLevel level, const char* format, ...);
LOGWRAPPER_API void log_message_ex(LogLevel level, const char* file, int line, const char* format, ...);
LOGWRAPPER_API void release_logger();

//----- 日志封装宏 -----
#define STDOUT_COLOR_SINK 0x01     // 只输出到终端
#define ROTATING_FILE_SINK 0x02    // 只输出到文件
#define STDOUT_and_FILE_SINK 0x03  // 同时输出到终端和文件
#define INIT_LOGGER_STDOUT_COLOR() init_logger(STDOUT_COLOR_SINK, "", 0, 0);
#define INIT_LOGGER_ROTATING_FILE(log_path, max_size, max_files) \
    init_logger(ROTATING_FILE_SINK, log_path, max_size, max_files);
#define INIT_LOGGER_ALL_SINKS(log_path, max_size, max_files) \
    init_logger(STDOUT_and_FILE_SINK, log_path, max_size, max_files);

#define UNINIT_LOGGER() release_logger();

// #define LOG_TRACE(...) log_message(LOG_TRACE, __VA_ARGS__)
// #define LOG_DEBUG(...) log_message(LOG_DEBUG, __VA_ARGS__)
// #define LOG_INFO(...) log_message(LOG_INFO, __VA_ARGS__)
// #define LOG_WARNING(...) log_message(LOG_WARNING, __VA_ARGS__)
// #define LOG_ERROR(...) log_message(LOG_ERROR, __VA_ARGS__)
// #define LOG_CRITICAL(...) log_message(LOG_CRITICAL, __VA_ARGS__)

// #define USE_PRINTF 1

#ifdef USE_PRINTF
#define LOG_OUTPUT(...)  \
    printf(__VA_ARGS__); \
    printf("\n")
#define LOG_TRACE(...) LOG_OUTPUT(__VA_ARGS__);
#define LOG_DEBUG(...) LOG_OUTPUT(__VA_ARGS__);
#define LOG_INFO(...) LOG_OUTPUT(__VA_ARGS__);
#define LOG_WARNING(...) LOG_OUTPUT(__VA_ARGS__);
#define LOG_ERROR(...) LOG_OUTPUT(__VA_ARGS__);
#define LOG_CRITICAL(...) LOG_OUTPUT(__VA_ARGS__);
#else
#define FILENAME                                         \
    (strrchr(__FILE__, '/') ? strrchr(__FILE__, '/') + 1 \
                            : (strrchr(__FILE__, '\\') ? strrchr(__FILE__, '\\') + 1 : __FILE__))
#define LOG_TRACE(...) log_message_ex(LOG_TRACE, FILENAME, __LINE__, __VA_ARGS__);
#define LOG_DEBUG(...) log_message_ex(LOG_DEBUG, FILENAME, __LINE__, __VA_ARGS__);
#define LOG_INFO(...) log_message_ex(LOG_INFO, FILENAME, __LINE__, __VA_ARGS__);
#define LOG_WARNING(...) log_message_ex(LOG_WARNING, FILENAME, __LINE__, __VA_ARGS__);
#define LOG_ERROR(...) log_message_ex(LOG_ERROR, FILENAME, __LINE__, __VA_ARGS__);
#define LOG_CRITICAL(...) log_message_ex(LOG_CRITICAL, FILENAME, __LINE__, __VA_ARGS__);
#endif

#ifdef __cplusplus
}  // extern "C"

#endif  // __cplusplus