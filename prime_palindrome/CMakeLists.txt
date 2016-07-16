cmake_minimum_required(VERSION 2.8.12)
project(prime_palindrome)

add_executable( prime_palindrome prime_palindrome.cpp )
set_target_properties( prime_palindrome
    PROPERTIES
        COMPILE_FLAGS "-std=c++11"
)
