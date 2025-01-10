#include <stdio.h>
#include "todo.h"
#include "../File_Handle/fileManger.h"
#include "../Container/Container.h"
Todo_t __todo;
Todo_t *Todo_create()
{
    __todo.__taskListFilePath = Todo_AllProject(DEFAULT_RECORD_FILE_PATH);
    __todo.__container = NULL;
    __todo.__newTask = NULL;
    return &__todo;
}

myContainer_t *Todo_AllProject(const char *file)
{
    myContainer_t *self = Container_create();
    int tasks[MAX_TASK_NUMBERS] = {0};
    int last;
    char* contant_list = File_loadTask(file, tasks, &last);
    for (int i = 0; i < last; i++)
    {
        Container_append(self, contant_list+ tasks[i]);
    } 
    return self;
}

myContainer_t *Todo_loadTask(const char *filePath)
{
    myContainer_t *self = Container_create();
    int tasks[MAX_TASK_NUMBERS] = {0};
    int last;
    char* contant_list = File_loadTask(filePath, tasks, &last);
    for (int i = 0; i < last; i++)
    {
        Container_append(self, contant_list+ tasks[i]);
    } 
    return self;
}

void Todo_save()
{
}
