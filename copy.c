#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include <fcntl.h>  
#include<stdlib.h>
#define BUF_SIZE 1024

int main(int argc,char** argv){
    char *buffer = (char*)malloc(BUF_SIZE*sizeof(char));
    int arrlen;
    int readnum;
    int writenum;
    printf("Ok copying %s and pasting to %s...\n",argv[1], argv[2]);

    int copying = open(argv[1], O_RDONLY | O_CREAT);
    int pasting = open(argv[2], O_WRONLY | O_CREAT);
    if(copying == -1){
        perror("Error printed by perror:");
    }
    while((readnum = read(copying,buffer,BUF_SIZE))>0){
        read(copying,buffer,BUF_SIZE);
        writenum = write(pasting, buffer, BUF_SIZE);
        if(writenum < 0){
            perror("Error printed by perror:");
        }

    }
    int i;
    for(i=0;i<1024;i++){
        printf("%c", buffer[i]);
    }

    close(pasting);
    close(copying);
}