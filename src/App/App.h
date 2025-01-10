#ifndef APP_H
#define APP_H

#include "../File_Handle/fileManger.h"
#include "../Container/Container.h"
#include "../Todo/todo.h"
#include "../File_Handle/fileManger.h"

typedef struct App
{
    Todo_t* todo;
}App_t;

void App_create(App_t* app);
void App_main(App_t* app);
void App_close(App_t* app);

#endif