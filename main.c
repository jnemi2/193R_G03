//
// Created by bauti on 11/23/2021.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){

    char* buffer = "Hello there";

    //assignment
    FILE * file = fopen("A1.txt", "wt");
    fwrite("Line 1\n", 1, 7, file);
    fwrite("Line 2\n", 1, 7, file);
    fwrite("Line 3\n", 1, 7, file);
    fwrite("Line 4\n", 1, 7, file);

    fclose(file);

    return 0;
}