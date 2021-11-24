//
// Created by bauti on 11/24/2021.
//

#include "helper.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


Stack *newNode() {
    Stack* aux = (Stack*) malloc(sizeof (Stack));
    if (aux == NULL) {
        printf("Not enough memory.\n");
        exit(-1);
    }
    aux->next = NULL;
    return aux;
}

void push(Stack **stack, char *string) {
    Stack* aux = newNode();
    strcpy((aux->string), string);
    if (*stack == NULL) {
        *stack = aux;
    } else {
        aux->next = *stack;
        *stack = aux;
    }
}

void pop(Stack **stack) {
    Stack* aux = NULL;
    if (*stack != NULL) {
        aux = *stack;
        *stack = aux->next;
        free(aux);
    }
}

char *peak(Stack *stack) {
    char* aux = NULL;
    if (stack != NULL) {
        aux = stack->string;
    }
    return aux;
}



