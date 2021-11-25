//
// Created by bauti on 11/24/2021.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "file_manager.h"

void save(char* id, char* last_name, char* first_name) {
    FILE * file = fopen("people.txt", "at");
    long length = strlen(id) + strlen(last_name) + strlen(first_name);
    char* buffer = (char*) malloc(length + 1);
    strcat(buffer, id);
    strcat(buffer, last_name);
    strcat(buffer, first_name);
    buffer[length] = '\0';
    fwrite(buffer, 1, length, file);
}
