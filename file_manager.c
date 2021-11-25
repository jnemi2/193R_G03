//
// Created by bauti on 11/24/2021.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "file_manager.h"

void save(char* id, char* last_name, char* first_name) {
    FILE * file = fopen("people.txt", "at");
    long length = ID_LENGTH + LASTNAME_LENGTH + FIRSTNAME_LENGTH;
    long reference = 0;
    char buffer[length + 1];
    while (reference <= ID_LENGTH && *(id+reference) != '\0') {
        buffer[reference] = *(id+reference);
        reference++;
    }
    for (int i = reference; i < ID_LENGTH; i++)
        buffer[i] = ' ';
    reference = 0;
    while (reference <= LASTNAME_LENGTH && *(last_name+reference) != '\0') {
        buffer[reference + ID_LENGTH] = *(last_name+reference);
        reference++;
    }
    for (int i = reference; i < LASTNAME_LENGTH; i++)
        buffer[i + ID_LENGTH] = ' ';
    reference = 0;
    while (reference <= FIRSTNAME_LENGTH && *(first_name+reference) != '\0') {
        buffer[reference + ID_LENGTH + LASTNAME_LENGTH] = *(first_name+reference);
        reference++;
    }
    for (int i = reference; i < FIRSTNAME_LENGTH; i++)
        buffer[i + ID_LENGTH + LASTNAME_LENGTH] = ' ';
    buffer[length] = '\0';
    fwrite(buffer, 1, length, file);
    fclose(file);
}
