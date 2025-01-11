#include "Container.h"
#include <string.h>

myContainer_t *Container_create()
{
    myContainer_t* myContainer = (struct myContainer*)malloc(sizeof(struct myContainer));
    myContainer->__head = NULL;
    myContainer->__tail = NULL;
    myContainer->__tasksCount = 0;
    return myContainer;
}

void Container_append(myContainer_t *list, char *text)
{
    // This is heaply created new
    struct tnode* newNode = (struct tnode*)malloc(sizeof(struct tnode)); 
    newNode->task = malloc(strlen(text)+1); // but malloc (strlen(text)+1) is also right char is size is 1
    newNode->next = NULL;
    strcpy(newNode->task,text);
    if (list->__head == NULL) list->__head = newNode;
    if (list->__tail != NULL) list->__tail->next = newNode;
    list->__tail = newNode;
    
    list->__tasksCount++;
}

void Container_print(const myContainer_t *list)
{
    for (struct tnode* it = list->__head; it != NULL; it = it->next)
    {
        printf("%s->",it->task);
    }
    printf("\n");
}

void Container_del(myContainer_t *list)
{
    struct tnode* node = list->__head;
    struct tnode* nextNode = NULL;

    while (node != NULL)
    {
        nextNode = node->next;
        free(node->task);
        free(node);
        node = nextNode;
    }
     free(list);
}
