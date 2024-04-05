# CMakeLists.txt

cmake_minimum_required(VERSION 3.22)
project(Harl_2_0)

# Set the C++ standard to C++98
set(CMAKE_CXX_STANDARD 98)

# Set the C++ compiler
set(CMAKE_CXX_COMPILER clang++-17)

# Add the executable target
file(GLOB sources main.cpp Harl.cpp Harl.hpp)
add_executable(Harl_2_0 "")
target_sources(Harl_2_0 PRIVATE ${sources})
set_target_properties(Harl_2_0 PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_LIST_DIR})

# Set compiler flags
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Werror -std=c++98 -fno-limit-debug-info")
# Generate compile_commands.json
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

enable_testing()