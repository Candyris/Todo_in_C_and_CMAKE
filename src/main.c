#include <stdio.h>
#include "File_Handle/fileManger.h"
#include "Container/Container.h"
#include "Todo/todo.h"

int main(int argc, char** argv)
{
    if (argc != 2)
    {
        printf("Invalid Input !\n pass in the todofile in argument!"); // ok somehow
        return -1;
    }
    /**
     * psudeo code before implementing everthing
     * 
     * first we need to open a file to write the task for it to save
     * add new target of todo
     * add task with argv (for later) 
     * 
     */

    // Let's try if this working 
    myContainer_t* box = Todo_loadTask(argv[1]); 
    if (!box)
    {
        perror("Null box\n");
        return -1;
    }
    Container_append(box,"Hello");
    Container_append(box,"Create App");
    Container_append(box,"Open app");
    Container_print(box);

}