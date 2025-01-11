#ifndef TODO_H
#define TODO_H
#define DEFAULT_SAVE_PROJECTDIR_PATH "cache/all_records.txt" 
#define DEFAULT_SAVE_PATH "cache/" 

#include "../Container/Container.h"

typedef struct Todo
{
    myContainer_t* __container;
    myContainer_t* __taskListFilePath;
    char* __newTask;
}Todo_t;

// This function returns a stack member reference of todo structure
// cause the todo will only have a one instance of it.
Todo_t* Todo_create();

// This will return all the project directories store in file  
// This will function return value will be as Container structure
myContainer_t* Todo_AllProject();

// This load all the task in 
myContainer_t* Todo_loadTask(const char* filePath);

// void Todo_save(Todo);

#endif // TODO_H