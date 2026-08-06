# include <stdio.h>
# include <stdlib.h>
# include "..\include\stack.h"

int main(){
    struct Stack *stackPtr = initialize();

    if(isEmpty(stackPtr))
        printf("Stack is empty\n");
    
    printf("Enter the number of elements you want to push: ");
    int length;
    scanf("%d", &length);


    for(int i = 0; i < length; i++){
        int current_digit;
        scanf("%d", &current_digit);
        push(stackPtr, current_digit);
    }
    
    printf("Last entered digit: %d\n", peek(stackPtr));

    printf("length of the stack: %d\n", size(stackPtr));

    printf("Displaying all the elements:\n");
    display(stackPtr);

    printf("Popping all the elements:\n");

    int popped;
    while(1){
        popped = pop(stackPtr);
        if(popped == -1)
            break;
        printf("Popped element: %d\n", popped);
    }

    return 0;

}