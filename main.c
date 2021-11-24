//
// Created by bauti on 11/23/2021.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
    printf("Opening...\n");

    FILE * file = fopen("A1.txt", "at");
    char* new_line1 = "New line 1\n";
    char* new_line2 = "New line 2\n";
    fwrite(new_line1, 1, strlen(new_line1), file);
    fwrite(new_line2, 1, strlen(new_line2), file);
    fclose(file);


    printf("Done.\n");

    return 0;
}