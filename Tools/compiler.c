// Abandoned for now, I will come back to this later. 
#include<stdio.h>
#include<stdlib.h>
int main(int argc, char **argv){
    system("gcc %s -o %s `pkg-config --cflags gtk4 --libs gtk4`", argv[1], argv[2]);
    return 0;
}