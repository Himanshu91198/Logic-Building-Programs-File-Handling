/*

Delete the file

remove(char *Filename)

*/
#include <stdio.h>
#include <fcntl.h>
// #include <unistd.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    char Filename[50];
    
    printf("Enter the file name that you want to delete: \n");
    scanf("%s", Filename);

    remove(Filename);
    
    return 0;
}