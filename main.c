//
// Created by bauti on 11/23/2021.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LINE_TO_DELETE 2


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

    const char separator[2] = "\n\0";

    int start_ref = 0;
    int line_length = 0;

    // Assignment
    char* token = strtok(buffer, separator);
    for (int i = 0; i < LINE_TO_DELETE - 1; i++) {
        token = strtok(NULL, separator);
        start_ref = start_ref + strlen(token) + 1;
    }

    token = strtok(NULL, separator); // Finding line_length
    line_length = strlen(token);

    char* out_buffer = (char*) malloc(line_length + 1);
    out_buffer[line_length] = '\0';
    for (int c = 0; c < line_length; c++) {
        out_buffer[c] = ' '; //Updating buffer with new info to override file
    }

    file = fopen("A1.txt", "rt+");
    fseek(file, start_ref + 1, SEEK_SET); // Seeking line to delete
    fwrite(out_buffer, 1, line_length, file);
    fclose(file);


    return 0;
}