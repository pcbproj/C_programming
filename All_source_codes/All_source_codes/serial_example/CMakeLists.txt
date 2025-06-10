# Минимальная версия CMake
cmake_minimum_required(VERSION 3.10)

# Название проекта и язык
project(serial_app C)

# Указываем директорию с заголовками
include_directories(core/inc)

# Добавляем главный файл
set(SOURCES
    core/src/main.c
)

# Платформозависимая реализация
if(WIN32)
    message(STATUS "Compiling for Windows")
    list(APPEND SOURCES platform/serial_windows.c)
elseif(UNIX)
    message(STATUS "Compiling for Linux")
    list(APPEND SOURCES platform/serial_linux.c)
else()
    message(FATAL_ERROR "Unsupported platform")
endif()

# Финальный исполняемый файл
add_executable(serial_app ${SOURCES})
