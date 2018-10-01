cmake_minimum_required(VERSION 3.12)
project(demo)

set(CMAKE_CXX_STANDARD 17)

add_executable(demo src/main.cpp src/game/State.cpp src/game/State.h src/game/PegSolitaire.h src/game/PegSolitaire.cpp src/utility/Renderer.cpp src/utility/Renderer.h src/solver/BFSSolver.cpp src/solver/BFSSolver.h)