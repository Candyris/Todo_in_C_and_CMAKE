#include "todo.h"
#include <stdio.h>
myContainer_t *Todo_loadTask(const char *filePath)
{
    myContainer_t* list = Container_create();
    FILE* file = fopen(filePath,"r");
    if (!file)
    {
        printf("[TODO_ERROR]: Failed to Open \"%s\" path!\n",filePath);
        return NULL;
    }
    char ch;
    int count = 0;
    char buffer[MAX_TASK_LENGTH];
    while ((ch = fgetc(file)) != EOF)
    {
        if (ch == '\n') 
        {
            buffer[++count] = '\0';
            Container_append(list,buffer);
            count= 0;
            continue;
        } 
        buffer[count] = ch;
        count++;
    }
    buffer[++count] = '\0';
    Container_append(list,buffer);
    return list;
}

void Todo_save()
{
    
}
