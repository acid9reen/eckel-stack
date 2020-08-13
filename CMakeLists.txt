cmake_minimum_required(VERSION 3.0)
set(PROJECT "Stack_ex")
project(${PROJECT})

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17 -Wall")
set(INCLUDE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/include")
set(SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/source")

add_library(stack 
    STATIC
    ${INCLUDE_DIR}/stack.hpp
    ${SOURCE_DIR}/stack.cpp
)
target_include_directories(stack PRIVATE ${INCLUDE_DIR})

add_executable(${PROJECT} ${SOURCE_DIR}/main.cpp)
target_include_directories(${PROJECT} PRIVATE ${INCLUDE_DIR})
target_link_libraries(Stack_ex stack)
