//
// Created by bauti on 11/23/2021.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
    //Some text
    char* text = "This is some text.";

    //assignment
    FILE * file = fopen("A1", "wt");
    fwrite(text, 1, strlen(text), file);
    fclose(file);

    return 0;
}