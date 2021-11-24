//
// Created by bauti on 11/24/2021.
//

#ifndef INC_193R_G03_HELPER_H
#define INC_193R_G03_HELPER_H
#define TEXT_LEN 100

typedef struct stack {
    char string[TEXT_LEN];
    struct stack * next;
} Stack;

Stack* newNode();
void push(Stack** stack, char* string);
void pop(Stack** stack);
char* peak(Stack* stack);

#endif //INC_193R_G03_HELPER_H
