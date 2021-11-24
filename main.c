//
// Created by bauti on 11/23/2021.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
    printf("Reading...\n");

    // Loads the file in a dynamic array of chars
    FILE * file = fopen("A1.txt", "rt");
    fseek(file, 0, SEEK_END);
    long length = ftell(file);
    fseek(file, 0, SEEK_SET);
    char * buffer = (char*) malloc(length + 1);
    buffer[length] = '\0';
    fread(buffer, 1, length, file);
    fclose(file);

    const char separator[3] = " \n\0";

    int word_count = 0;

    // Assignment
    char* token = strtok(buffer, separator);
    while (token != NULL) {
        token = strtok(NULL, separator);
        word_count++;
    }

    printf("\nThe file has %d words\n", word_count);

    return 0;
}