cmake_minimum_required(VERSION 2.8.12)
project(valid_parentheses)

add_executable( valid_parentheses valid_parentheses.cpp )
set_target_properties( valid_parentheses
    PROPERTIES
        COMPILE_FLAGS "-std=c++11"
)

