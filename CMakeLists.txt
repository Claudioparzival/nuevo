cmake_minimum_required(VERSION 3.24)
project(untitled)

set(CMAKE_CXX_STANDARD 17)

add_executable(untitled cmake-build-debug/Testing/main.cpp Persona.cpp Persona.h Youngling.cpp Youngling.h main.cpp Padawan.cpp Padawan.h CaballeroJedi.cpp CaballeroJedi.h poderes.cpp poderes.h SuperPersona.cpp SuperPersona.h poderes2.cpp poderes2.h)
