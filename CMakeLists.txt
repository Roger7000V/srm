if(NOT WIN32)
    message(FATAL_ERROR "Not for Non-Windows Platforms")
endif()

cmake_minimum_required(VERSION 3.16)

project(srm)
set(NAME srm)

add_executable(${NAME})

target_sources(${NAME} PRIVATE
    src/error.c
    src/fill.c
    src/main.c
    src/random.c
    src/rename_unlink.c
    src/sunlink.c
    src/tree_walker.c
    win/tree.cpp
)

target_include_directories(${NAME} PRIVATE src win)

target_link_options(${NAME} PRIVATE -static)
