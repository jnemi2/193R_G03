//
// Created by bauti on 11/23/2021.
//

#include <stdio.h>
#include "file_manager.h"


int main(){
    printf("Saving record\n");
    char* id = "43124241";
    char* last_name = "Harper";
    char* first_name = "Stephen";
    save(id, last_name, first_name);
    printf("Done\n");

    return 0;
}