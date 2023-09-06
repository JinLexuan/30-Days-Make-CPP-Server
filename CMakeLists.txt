cmake_minimum_required(VERSION 3.21)
project(CS)

find_package(Qt6 REQUIRED COMPONENTS Core Widgets Gui)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Wpedantic -Werror -Wno-pragmas -Wno-comment")
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(TARGET setup)

set(SOURCES
    main.cpp
)

add_executable(${TARGET} ${SOURCES})

set_target_properties(${TARGET} PROPERTIES 
    RUNTIME_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/bin")
