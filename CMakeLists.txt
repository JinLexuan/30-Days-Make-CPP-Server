cmake_minimum_required(VERSION 3.21)
project(CS)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Wpedantic -Werror -Wno-pragmas -Wno-comment")
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(CLIENT_TARGET client)
set(CLIENT_SOURCES
    Client.cpp
)

set(SERVER_TARGET server)
set(SERVER_SOURCES
    Server.cpp
)

add_executable(${CLIENT_TARGET} ${CLIENT_SOURCES})
add_executable(${SERVER_TARGET} ${SERVER_SOURCES})

set_target_properties(${SERVER_TARGET} ${CLIENT_TARGET} PROPERTIES 
    RUNTIME_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/bin")