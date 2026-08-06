# include <stdio.h> 
# include <stdlib.h>
# include "..\include\stack.h"

struct Stack* initialize(){
    
    struct Stack *stackPtr = malloc(sizeof(struct Stack));
    if(stackPtr == NULL)
        return NULL;

    // we dont need to initialize the first element of the array as we dont care about the garbage values
    stackPtr -> top = -1;
}

int isEmpty(struct Stack *stackPtr){
    return stackPtr -> top == -1;
}

int isFull(struct Stack *stackPtr){
    return stackPtr -> top == STACK_SIZE - 1;
}

void push(struct Stack *stackPtr, int element){
    if(isFull(stackPtr))
        return;
    else{
        stackPtr -> top++;
        stackPtr -> data[stackPtr -> top] = element;
    }
}


int peek(struct Stack *stackPtr){
    if(stackPtr -> top == -1)
        return -1;

    return stackPtr -> data[stackPtr -> top];
}

int pop(struct Stack *stackPtr){
    if(stackPtr -> top == -1)
        return -1;

    return stackPtr -> data[stackPtr -> top--];
}

int size(struct Stack *stackPtr){
    return stackPtr -> top + 1;
}

void display(struct Stack *stackPtr){
    int topMost = stackPtr -> top;

    printf("Elements in the stack:\n");

    while(1){
        if(topMost == -1)
            break;
        printf("%d ", stackPtr -> data[topMost--]);

    }
    printf("\n");
}

void clear(struct Stack *stackPtr){
    stackPtr -> top = -1;
}