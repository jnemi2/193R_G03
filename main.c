//
// Created by bauti on 11/23/2021.
//

#include <stdio.h>
#include "file_manager.h"


int main(){
    printf("Saving record\n");
    char* id = "42123302";
    char* last_name = "Nemi";
    char* first_name = "Juan Bautista";
    save(id, last_name, first_name);
    printf("Done\n");

    return 0;
}