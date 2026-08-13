# include <stdlib.h>
# include <stdio.h>
# include "..\include\circular_queue.h"


struct CircularQueue* initialize(int size_queue){

    struct CircularQueue *queue = malloc(sizeof(struct CircularQueue));

    if(queue == NULL){
        return NULL;
        
    }

    queue -> capacity = size_queue;
    queue -> front = queue -> rear = -1;
    queue -> data = malloc(queue -> capacity * sizeof(int));

    if(queue -> data == NULL){
        free(queue);
        return NULL;
    }
    return queue;

}

int isEmpty(struct CircularQueue *queue){
    return queue -> front == -1 && queue -> rear == -1;
}

int isFull(struct CircularQueue *queue){

    if ((queue -> rear + 1) % queue -> capacity == queue -> front) // checks if rear and front point to the same index
        return 1;

    return 0;

}

void enqueue(struct CircularQueue *queue, int num){
    if(isEmpty(queue))
        queue -> front = queue -> rear = 0;
    else if(isFull(queue)){
        printf("Queue Overflow!!");
        return;
    }
    else
        queue -> rear = (queue -> rear + 1) % queue -> capacity;
    queue -> data[queue -> rear] = num;
}

int dequeue(struct CircularQueue *queue){
    if(isEmpty(queue)){
        printf("Queue underflow!!!\n");
        return -1;
    }

    int removed = queue -> data[queue -> front];

    if(queue -> front == queue -> rear)
        queue -> front = queue -> rear = -1;
    else 
        queue -> front = (queue -> front + 1) % queue -> capacity;

    return removed;
}

int peek(struct CircularQueue *queue){

    if(isEmpty(queue))
        return -1;
    else
        return queue -> data[queue -> front];
}

void display(struct CircularQueue *queue){

    printf("Elements in the circular queue:\n");

    
    if(isEmpty(queue)){
        printf("No elements in the queue\n");
        return;
    }
    int i = queue -> front;

    do {
        printf("%d ", queue -> data[i]);

        i = (i + 1) % queue -> capacity;
    } while(i != (queue -> rear + 1) % queue -> capacity);

    printf("\n");
}

int size(struct CircularQueue *queue){

    if(isEmpty(queue))
        return 0;
    else
        return (queue -> rear - queue -> front + queue -> capacity) % queue -> capacity + 1; 
}

void clear(struct CircularQueue *queue){
    queue -> front = queue -> rear = -1;
}