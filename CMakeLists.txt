cmake_minimum_required(VERSION 3.0)

project(oop_books)

set(SOURCE src/oop_books.cpp)

include_directories(include) 

add_executable(${PROJECT_NAME} ${SOURCE})

#target_link_libraries(${PROJECT_NAME} )

