cmake_minimum_required(VERSION 4.0)
project(RedSocial)

set(CMAKE_CXX_STANDARD 20)

add_executable(RedSocial main.cpp
        Comentario.cpp
        Comentario.h
        Publicacion.h
        Publicacion.cpp
        Usuario.h
        Usuario.cpp
        RedSocial.h)
