#include "App.h"
#include "../Color/colordef.h"
#include <stdio.h>
#include <string.h>

static int SelectDir();

void App_create(App_t *app)
{
    app->todo = Todo_create();
    app->todo->__taskListFilePath = Todo_AllProject(DEFAULT_RECORD_FILE_PATH);
}

void App_main(App_t *app)
{
    printf(YELLOW_COLOR "--------------[TODO LIST]-------------\n" DEFAULT_COLOR);
    int total_dir = app->todo->__taskListFilePath->__tasksCount;
    int project_no = SelectDir(app);
    if (project_no > total_dir || project_no <= 0)
    {
        printf("Selected the wrong Number!!\n");
        printf("-------------------------------------\n");

        return;
    }
    printf("--------------------------------------\n");

    // load the main todolist
    struct tnode *lst = app->todo->__taskListFilePath->__head;
    char string[100] = DEFAULT_SAVE_PATH;
    ;
    for (int i = 1; i <= total_dir; i++, lst = lst->next)
    {
        if (project_no == i)
        {
            strcat(string, lst->task);
            break;
        }
    }

    app->todo->__container = Todo_loadTask(string);
    while (1)
    {
        total_dir = app->todo->__container->__tasksCount;
        struct tnode *list = app->todo->__container->__head;
        int option = -1;
        system("clear");
        printf(YELLOW_COLOR "--------------[TODO LIST]-------------\n" DEFAULT_COLOR);

        for (int i = 0; i < total_dir; i++, list = list->next)
        {
            printf("|" MAGNETA_COLOR "%10d" DEFAULT_COLOR "|" MAGNETA_COLOR "%25s" DEFAULT_COLOR "|\n", i + 1, list->task);
        }
        printf("--------------------------------------\n");
        printf("1. Add\n"
               "2. non!\n"
               "Select: ");
        scanf("%d",&option);
        printf("\n%d\n",option);
        if (option != 1)
            break;
        getchar();
        printf("[Add Task]: ");
        scanf("%[^\n]100s",string);
        getchar(); 
        Container_append(app->todo->__container,string);
    }
}

void App_close(App_t *app)
{
    printf("-----------------[]-------------------\n");
}

int SelectDir(App_t *app)
{
    int userInput[100];
    int total_dir = app->todo->__taskListFilePath->__tasksCount;
    struct tnode *list = app->todo->__taskListFilePath->__head;
    for (int i = 0; i < total_dir; i++, list = list->next)
    {
        printf("|" MAGNETA_COLOR "%10d" DEFAULT_COLOR "|" MAGNETA_COLOR "%25s" DEFAULT_COLOR "|\n", i + 1, list->task);
    }
    printf(YELLOW_COLOR "--------------------------------------\n" DEFAULT_COLOR);
    int project_no;
    printf("Project Number: ");
    scanf("%d", &project_no);
    return project_no;
}
