cmake_minimum_required(VERSION 3.10)

project(serial_app C)

# Install the C standard
set(CMAKE_C_STANDARD 99)

# Specify the path to the sources
include_directories(src)

# Common files
set(SOURCES
    src/main.c
    src/serial.c
    src/serial.h
)

# Create an executable file
add_executable(serial_app ${SOURCES})

# Linking additional libraries
if(UNIX)
    target_link_libraries(serial_app PRIVATE pthread)
elseif(WIN32)
    target_link_libraries(serial_app PRIVATE setupapi)
endif()
