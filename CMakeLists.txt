cmake_minimum_required(VERSION 3.10)
project(my_little_project CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(my_little_project
    main.cpp
    Name.cpp
)
