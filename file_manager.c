//
// Created by bauti on 11/24/2021.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "file_manager.h"

void save(char* id, char* last_name, char* first_name) {
    FILE * file = fopen("people2.txt", "at");
    long len_id = strlen(id);
    long len_firstname = strlen(first_name);
    long len_lastname = strlen(last_name);
    long length = len_id + len_lastname + len_firstname + 3;
    int len_digits = count_digits(length);
    length = length + len_digits;  // Calculating record length
    char buffer[length + 1];
    itoa(length, buffer, 10);  // Adding record length digits to buffer
    buffer[len_digits] = ':';
    int i=0;
    for (i=0; i < len_id && *(id+i) != '\0'; i++)
        buffer[i + len_digits + 1] = *(id+i);  // Filling first field

    buffer[i + len_digits + 1] = ':';
    i = i + len_digits + 1;
    for (int j = 0; j < len_lastname && *(last_name+j) != '\0'; j++) {
        i++;
        buffer[i] = *(last_name+j);  // Filling the second field
    }
    i++;
    buffer[i] = ':';
    for (int j = 0; j < len_firstname && *(first_name+j) != '\0'; j++) {
        i++;
        buffer[i] = *(first_name+j);  // Filling the third field
    }

    buffer[length] = '\0';
    fwrite(buffer, 1, length, file);
    fclose(file);
}

int count_digits(int number) {
    int aux = number;
    int counter = 0;
    while (aux != 0) {
        aux = aux / 10;
        counter++;
    }
    return counter;
}
