#ifndef FILE_MANGER
#define FILE_MANGER
#define MAX_TASK_NUMBERS 50
#define MAX_TASK_LENGTH  100

// I am reading with stack based instead of heap based
char *File_loadTask(const char* filePath, int *newline, int* last);
#endif
