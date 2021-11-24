//
// Created by bauti on 11/23/2021.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char* read_file(char* file_name);
void append_file(char* content, char* file_name);

int main(){
    printf("Hello, world!\n");
    char* file1 = read_file("A1.txt");
    char* file2 = read_file("A2.txt");
    append_file(file1, "Merge.txt");
    append_file(file2, "Merge.txt");
    printf("Done\n");

    free(file1);
    free(file2);
    return 0;
}

char* read_file(char* file_name) {
    FILE * file = fopen(file_name, "rt");
    fseek(file, 0, SEEK_END);
    long length = ftell(file);
    fseek(file, 0, SEEK_SET);
    char* buffer = (char*) malloc(length + 1);
    fread(buffer, 1, length, file);
    buffer[length] = '\0';
    fclose(file);
    return buffer;
}

void append_file(char* content, char* file_name) {
    FILE * file = fopen(file_name, "at");
    fwrite(content, 1, strlen(content), file);
    fclose(file);
}