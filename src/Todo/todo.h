#ifndef TODO_H
#define TODO_H
#define DEFAULT_RECORD_FILE_PATH "cache/all_records.txt" 
#define DEFAULT_SAVE_PATH "cache/" 

#include "../Container/Container.h"

typedef struct Todo
{
    myContainer_t* __container;
    myContainer_t* __taskListFilePath;
    char* __newTask;
}Todo_t;

Todo_t* Todo_create();
myContainer_t* Todo_AllProject(const char* file);
myContainer_t* Todo_loadTask(const char* filePath);

// void Todo_save(Todo);

#endif // TODO_H