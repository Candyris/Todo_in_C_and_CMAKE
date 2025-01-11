#ifndef Container_H
#define Container_H
#include <stdio.h>
#include <stdlib.h>

// Node for datastructure
struct tnode
{
    char* task;
    struct tnode* next;
};

// This is container structure
typedef struct myContainer {
    struct tnode* __head;
    struct tnode* __tail;
    int __tasksCount;
} myContainer_t;


// This function create container using linked-list
myContainer_t* Container_create();

// This function append new node on the list 
void Container_append(myContainer_t* list,  char* text);

// This function provides simple way to print the container
void Container_print(const myContainer_t* list);

// void Container_remove(myContainer_t* list, const char* text, int num);
void Container_del(myContainer_t *list);


#endif // Container_H