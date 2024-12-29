#include <stdio.h>

int main(void)
{
    FILE* file = fopen("t.txt","r");

    if (!file)
    {
        printf("[ERROR]: Failed to load the file!\n");
        return -1;
    }

    char buf[512];
    while (fgets(buf,512,file) != NULL)
    {
        printf("%s",buf);
    }
    fclose(file);
}