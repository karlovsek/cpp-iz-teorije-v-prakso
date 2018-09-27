cmake_minimum_required(VERSION 3.12)
project(demo)

set(CMAKE_CXX_STANDARD 14)

add_executable(demo src/main.cpp src/game/State.cpp src/game/State.h src/game/PegSolitaire.h src/game/PegSolitaire.cpp src/game/GameInterface.h src/utility/Renderer.cpp src/utility/Renderer.h)