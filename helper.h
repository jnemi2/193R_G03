//
// Created by bauti on 11/24/2021.
//

#ifndef INC_193R_G03_HELPER_H
#define INC_193R_G03_HELPER_H

typedef struct stack {
    char* string;
    struct stack * next;
} Stack;

Stack* newNode();
void push(Stack* stack, char* string);
char* pop(Stack* stack);

#endif //INC_193R_G03_HELPER_H
