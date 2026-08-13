# include <stdio.h>
# include <stdlib.h>
# include "../include/circular_queue.h"

void main(){
    printf("Enter no. of elements for the circular queue: ");
    int queue_size;
    scanf("%d", &queue_size);

    struct CircularQueue *queue = initialize(queue_size);

    printf("Initial size: %d\n", size(queue));
    if(isEmpty(queue))
        printf("Empty\n");


    /* int num;
    printf("Enter the elements of the queue till -1\n");
    while(1){
        scanf("%d", &num);
        if(num == -1)
            break;
        enqueue(queue, num);
    } */

    enqueue(queue, 10);
    enqueue(queue, 20);
    enqueue(queue, 30);
    enqueue(queue, 40);

    

    printf("Size now: %d\n", size(queue));
    if(isEmpty(queue))
        printf("Empty\n");
    else
        printf("Not empty\n");
    display(queue);

    if(isFull(queue))
        printf("Queue full");

    
    dequeue(queue);
    dequeue(queue);

    enqueue(queue, 50);
    enqueue(queue, 60);

    display(queue);

    while(size(queue) != 0)
        dequeue(queue);

    dequeue(queue);

    int i = 1;
    while(!isFull(queue)){
        enqueue(queue, i++);
    }
    display(queue);

    enqueue(queue, i);

    clear(queue);
    display(queue);

}