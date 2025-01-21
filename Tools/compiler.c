#include<stdio.h>
#include<stdlib.h>
int main(int argc, char **argv){
    char command[256];
    sprintf(command, "eval gcc %s -o %s `pkg-config --cflags --libs gtk4`", argv[1], argv[2]);
    system(command);
    return 0;
}