cmake_minimum_required(VERSION 3.13)
project(ft_retro)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(ft_retro
        AUnit.hpp
        Background.cpp
        Background.hpp
        Bullet.cpp
        Bullet.hpp
        Control.cpp
        Control.hpp
        Enemy.cpp
        Enemy.hpp
        Entry.cpp
        Entry.hpp
        Hero.cpp
        Hero.hpp
        Level.cpp
        Level.hpp
        lEvent.hpp
        Map.cpp
        Map.hpp
        Model.cpp
        Model.hpp
        View.cpp
        View.hpp)
