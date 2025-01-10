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
    struct tnode* new = (struct tnode*)malloc(sizeof(struct tnode)); // I think so this function is done !
    new->task = malloc(sizeof(char) * (strlen(text)+1)); // but malloc (strlen(text)+1) is also right char is size is 1
    new->next = NULL;
    strcpy(new->task,text);
    if (list->__head == NULL) list->__head = new;
    if (list->__tail != NULL) list->__tail->next = new;
    list->__tail = new;
    
    list->__tasksCount++;
}

void Container_print(myContainer_t *list)
{
    for (struct tnode* it = list->__head; it != NULL; it = it->next)
    {
        printf("%s->",it->task);
    }
    printf("\n");
}

void Container_del()
{
}
