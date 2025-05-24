cmake_minimum_required(VERSION 3.31)
project(OSNP)

set(CMAKE_CXX_STANDARD 20)

# Main app
add_executable(OSNP main.cpp)
add_executable(Main2024A 2024/A/main.cpp
        2024/A/jawaban.cpp)
add_executable(Main2024B 2024/B/main.cpp
        2024/B/jawaban.cpp)

# Test
enable_testing()

## 2024
add_executable(OSNP2024A 2024/A/main.test.cpp
        2024/A/jawaban.cpp)
add_test(NAME Jawaban2024A COMMAND OSNP2024A)
add_executable(OSNP2024B 2024/B/main.test.cpp
        2024/B/jawaban.cpp)
add_test(NAME Jawaban2024B COMMAND OSNP2024B)
