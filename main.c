//
// Created by bauti on 11/23/2021.
//

#include <stdio.h>
#include <stdlib.h>


int main(){
    printf("Deleting file...\n");
    remove("Merge.txt");
    printf("Done\n");
    return 0;
}