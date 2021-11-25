//
// Created by bauti on 11/24/2021.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "file_manager.h"

void save(char* id, char* last_name, char* first_name) {
    FILE * file = fopen("people3.txt", "at");
    long len_id = strlen(id);
    long len_firstname = strlen(first_name);
    long len_lastname = strlen(last_name);
    long length = len_id + len_lastname + len_firstname + 3;  // Calculating record length
    char buffer[length + 1];
    buffer[0] = '#';
    int pos=0;
    for (int i = 0; i < len_id && *(id+i) != '\0'; i++) {
        pos++;
        buffer[pos] = *(id + i);  // Filling first field
    }
    pos++;
    buffer[pos] = ':';
    for (int i = 0; i < len_lastname && *(last_name+i) != '\0'; i++) {
        pos++;
        buffer[pos] = *(last_name+i);
    }
    pos++;
    buffer[pos] = ':';
    for (int i = 0; i < len_firstname && *(first_name+i) != '\0'; i++) {
        pos++;
        buffer[pos] = *(first_name+i);
    }

    buffer[length] = '\0';
    fwrite(buffer, 1, length, file);
    fclose(file);
}
