# This file should name this to work like (CMakeLists.txt)

# First we need mention the minimum support cmake version
cmake_minimum_required(VERSION 3.16.2)

# CMake required to must give a project name
project(TODO)

# now you need to mention what will be the executable name (a.exe, 1.c, game.c, app.c,...etc ) 
# then the source file (main.c, draw.c,...etc)

add_executable(todo 
    ${CMAKE_SOURCE_DIR}/src/main.c 
    ${CMAKE_SOURCE_DIR}/src/File_Handle/fileManger.c
    ${CMAKE_SOURCE_DIR}/src/Todo/todo.c
    ${CMAKE_SOURCE_DIR}/src/Container/Container.c
    ${CMAKE_SOURCE_DIR}/src/App/App.c
)

# including the different directory for other source file
target_include_directories(todo PUBLIC 
    ${CMAKE_SOURCE_DIR}/src/File_Handle
    ${CMAKE_SOURCE_DIR}/src/Container
    ${CMAKE_SOURCE_DIR}/src/Todo
    ${CMAKE_SOURCE_DIR}/src/App
)