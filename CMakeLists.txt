cmake_minimum_required(VERSION 3.7)
project(pistachio_app)
SET(CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/CMakeModules)
set(CMAKE_CXX_STANDARD 11)
find_package(Pistache REQUIRED)
find_package(Threads REQUIRED)

set(SOURCE_FILES main.cpp ${Pistache_INCLUDE_DIR})

add_executable(pistachio_app ${SOURCE_FILES})
target_link_libraries(pistachio_app ${Pistache_LIBRARY} Threads::Threads)
