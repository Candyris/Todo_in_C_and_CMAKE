#ifndef Container_H
#define Container_H
#include <stdio.h>
#include <stdlib.h>

// I am using link-list
struct tnode
{
    char* task;
    struct tode* next;
};

typedef struct myContainer {
    struct tnode* __head;
    struct tnode* __tail;
    int __tasksCount;
} myContainer_t;

myContainer_t* Container_create();
void Container_append(myContainer_t* list, const char* text);
void Container_print(myContainer_t* list);
// void Container_remove(myContainer_t* list, const char* text, int num);

void Container_del();


#endif // Container_H