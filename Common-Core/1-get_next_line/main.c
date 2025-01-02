#include <stdio.h>
#include <fcntl.h>
#include "get_next_line.h"

int main(){
    int fd = open("deneme.txt", O_RDWR);
    //write(fd, "asdoasdkhjfbasdf\nasdfhbaskdhgfas\nmerhaba\nburak\nnasalsanasdfjba", );
    char *string;
    while(string = get_next_line(fd)){
        printf("%s",string);
        free(string);
    }
}