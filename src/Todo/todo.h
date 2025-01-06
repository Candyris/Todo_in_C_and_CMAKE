#ifndef TODO_H
#define TODO_H
#include "../Container/Container.h"

#define DEFAULT_FILE_PATH "cache/task.txt" 
#define MAX_TASK_LENGTH 1000
typedef struct Todo
{
    myContainer_t* __container;
    char** __taskListFilePath;
    char* __newTask;
}Todo_t;

myContainer_t* Todo_loadTask(const char* filePath);
// void Todo_save(Todo);

#endif // TODO_H