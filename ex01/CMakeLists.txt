# CMakeLists.txt

cmake_minimum_required(VERSION 3.22)
project(moar_brainz)

# Set the C++ standard to C++98
set(CMAKE_CXX_STANDARD 98)

# Set the C++ compiler
set(CMAKE_CXX_COMPILER clang++-17)

# Add the executable target
file(GLOB sources main.cpp Zombie.cpp Zombie.hpp zombieHorde.cpp)
add_executable(moar_brainz "")
target_sources(moar_brainz PRIVATE ${sources})
set_target_properties(moar_brainz PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_LIST_DIR})

# Set compiler flags
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Werror -std=c++98")
# Generate compile_commands.json
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

enable_testing()