//
// Created by bauti on 11/23/2021.
//

#include <stdio.h>
#include <stdlib.h>
#include "helper.h"


int main(){
    /*
    printf("Reading...\n");
    FILE * file = fopen("A1.txt", "rt");
    fseek(file, 0, SEEK_END);
    long length = ftell(file);
    fseek(file, 0, SEEK_SET);
    char * buffer = (char*) malloc(length + 1);
    buffer[length] = '\0';
    fread(buffer, 1, length, file);
    printf("%s", buffer);*/
    Stack*  stack = NULL;
    push(&stack, "Hello");
    push(&stack, "world");
    printf("%s", pop(&stack));
    printf("%s", pop(&stack));

    return 0;
}