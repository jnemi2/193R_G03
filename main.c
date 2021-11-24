//
// Created by bauti on 11/23/2021.
//

#include <stdio.h>
#include <stdlib.h>


int main(){
    printf("Opening...\n");

    // Loading buffer from source file
    FILE * file = fopen("A1.txt", "rt");
    fseek(file, 0, SEEK_END);
    long length = ftell(file);
    fseek(file, 0, SEEK_SET);
    char* buffer = (char*) malloc(length + 1);
    fread(buffer, 1, length, file);
    fclose(file);

    // Cloning into destination file
    file = fopen("A2.txt", "wt");
    fwrite(buffer, 1, length, file);
    fclose(file);

    printf("Done\n");
    return 0;
}