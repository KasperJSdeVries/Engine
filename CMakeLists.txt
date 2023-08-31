cmake_minimum_required(VERSION 3.7)
project(game C)

find_package(Vulkan REQUIRED)

set(CMAKE_C_STANDARD 11)

#add_executable(game modules/main.c
#        modules/platform/src/platform_win32.c
#)
#target_link_libraries(game ${Vulkan_LIBRARIES})
#target_include_directories(game PRIVATE ${Vulkan_INCLUDE_DIRS})
#target_include_directories(game PUBLIC .)

add_subdirectory(shared)
add_subdirectory(libraries)
add_subdirectory(modules)
add_subdirectory(testbed)
