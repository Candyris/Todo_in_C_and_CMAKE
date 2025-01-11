/**
 * Current this is handled by the allocation of the buffer on the stack  
 * which could easy overflow input buffer for now i am caring about it,
 * 
 * Later i may use dbms or wrote a nice heap allocator for it work nice;y
 * 
 */


#ifndef FILE_MANGER
#define FILE_MANGER

// This is the maximum task user can provide in one todolist project
#define MAX_TASK_NUMBERS 50

// This is the maximum string length of a task
#define MAX_TASK_LENGTH  100




// I am returning the string which have multiple null terminate in string per task
// For accessing where the location is passing the array in *stringEndPostion argumuent (this should preallocated with MAX_TASK_NUMBER)
// the noEndPosition says how many task it find in form of string
char *File_loadTask(const char *filePath, int *stringEndPostion,int* noEndPostion);
#endif
