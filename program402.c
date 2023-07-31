
#include <stdio.h>
#include <fcntl.h>
// #include <unistd.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    char Filename[50];
    int fd = 0;
    char Arr[10];

    printf("Enter the file name that you want to open: \n");
    scanf("%s", Filename);

    fd = open(Filename,O_RDONLY);
    
    read(fd,Arr,10);
    write(1,Arr,10);

    close(fd);
    
    return 0;
}