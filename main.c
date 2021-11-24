//
// Created by bauti on 11/23/2021.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "helper.h"


int main(){
    printf("Reading...\n");
    FILE * file = fopen("A1.txt", "rt");
    fseek(file, 0, SEEK_END);
    long length = ftell(file);
    fseek(file, 0, SEEK_SET);
    char * buffer = (char*) malloc(length + 1);
    buffer[length] = '\0';
    fread(buffer, 1, length, file);
    fclose(file);
    printf("%s", buffer);

    const char separator[2] = "\n\0";
    Stack* stack = NULL;

    // Assignment
    char* token = strtok(buffer, separator);
    while (token != NULL) {
        push(&stack, token);
        token = strtok(NULL, separator);
    }

    int line_count = 0;
    while (stack != NULL) {
        printf("%s", peak(stack));
        pop(&stack);
        line_count++;
    }
    printf("\nThe file has %d lines\n", line_count);

    return 0;
}