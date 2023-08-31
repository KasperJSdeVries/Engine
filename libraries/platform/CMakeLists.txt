cmake_minimum_required(VERSION 3.0)
project(platform C)

set(CMAKE_C_STANDARD 11)

file(GLOB_RECURSE SOURCE_FILES src/**.c)

add_library(${PROJECT_NAME} STATIC ${SOURCE_FILES})
target_include_directories(${PROJECT_NAME} PUBLIC include)
target_include_directories(${PROJECT_NAME} PRIVATE src)
target_include_directories(${PROJECT_NAME} PRIVATE ${SHARED_FILES_DIRECTORY})
