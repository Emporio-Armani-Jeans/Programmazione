cmake_minimum_required(VERSION 3.15)
project(Progetto)

set(CMAKE_CXX_STANDARD 11)

add_executable(Progetto main.cpp Tabella.cpp data.cpp Colonna.cpp Colonna.h Storage_Elements.hpp)