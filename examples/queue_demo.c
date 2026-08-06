# include <stdio.h>
# include <stdlib.h>
# include "..\include\queue.h"

int main(){

    struct Queue *queuePtr = initialize();

    int length;
    printf("Enter the number of elements you want to enter: ");
    scanf("%d", &length);

    printf("Enter the lements:\n");

    int current_element;

    for(int i = 0; i < length; i++){
        scanf("%d", &current_element);

        enqueue(queuePtr, current_element);
    }

    display(queuePtr);

    printf("Topmost element: %d", peek(queuePtr));

    printf("Dequeueing all the elements\n");

    for(int i = 0; i < length; i++)
        printf("%d\n", dequeue(queuePtr));

    display(queuePtr);

    peek(queuePtr);

    dequeue(queuePtr);

    free(queuePtr);
    queuePtr = NULL;

    return 0;
}