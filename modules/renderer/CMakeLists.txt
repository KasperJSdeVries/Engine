cmake_minimum_required(VERSION 3.0)
project(renderer C)

set(CMAKE_C_STANDARD 11)

file(GLOB_RECURSE SOURCE_FILES src/**.c)

add_library(${PROJECT_NAME} STATIC ${SOURCE_FILES})

target_include_directories(${PROJECT_NAME} PUBLIC include)
target_include_directories(${PROJECT_NAME} PRIVATE src)
target_include_directories(${PROJECT_NAME} PUBLIC ${SHARED_FILES_DIRECTORY})

find_package(Vulkan REQUIRED)

target_link_libraries(${PROJECT_NAME} PRIVATE ${Vulkan_LIBRARIES})
target_include_directories(${PROJECT_NAME} PRIVATE ${Vulkan_INCLUDE_DIRECTORIES})

file(GLOB_RECURSE TEST_FILES test/**.c)
add_executable(${PROJECT_NAME}_test ${TEST_FILES})

target_include_directories(${PROJECT_NAME}_test PUBLIC test)
target_link_libraries(${PROJECT_NAME}_test ${PROJECT_NAME})
