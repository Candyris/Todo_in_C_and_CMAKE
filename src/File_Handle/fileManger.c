#include "fileManger.h"
#include <stdio.h>

static char __buffer[MAX_TASK_NUMBERS * MAX_TASK_LENGTH] = {0};

char *File_loadTask(const char *filePath, int *newline,int* last)
{
    FILE *file = fopen(filePath, "r");
    if (!file)
    {
        printf("[FILE_HANDLE_ERROR]: Failed to Open \"%s\" path!\n", filePath);
        return NULL;
    }
    char ch;
    int count = 0;
    int mark = 1;

    while ((ch = fgetc(file)) != EOF)
    {
        if (ch == '\n')
        {
            __buffer[count++] = '\0';
            newline[mark] = count;
            mark++;
            continue;
        }
        __buffer[count] = ch;
        count++;
    }
    __buffer[count] = '\0';
    newline[mark] = count;
    *last = mark;
    return __buffer;
}

