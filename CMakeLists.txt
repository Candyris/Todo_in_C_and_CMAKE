# This file should name this to work like (CMakeLists.txt)

# First we need mention the minimum support cmake version
cmake_minimum_required(VERSION 3.31.2)

# CMake required to must give a project name
project(TODO)

# now you need to mention what will be the executable name (a.exe, 1.c, game.c, app.c,...etc ) 
# then the source file (main.c, draw.c,...etc)

add_executable(todo src/main.c)