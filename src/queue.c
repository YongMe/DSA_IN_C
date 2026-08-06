# include <stdio.h>
# include <stdlib.h>
# include "..\include\queue.h"

struct Queue* initialize(){
    struct Queue *queuePtr = malloc(sizeof(struct Queue));

    if(queuePtr == NULL)
        return NULL;

    queuePtr -> front = queuePtr -> rear = -1;

    return queuePtr;
}

int isEmpty(struct Queue *queuePtr){
    return ((queuePtr -> front == -1 && queuePtr -> rear == -1) || (queuePtr -> front > queuePtr -> rear));
}

int isFull(struct Queue *queuePtr){
    return queuePtr -> rear == QUEUE_SIZE -1;
}

void enqueue(struct Queue *queuePtr, int num){
    if(isFull(queuePtr)){
        printf("Queue Overflow!!\n");
        return;
    }
        
    if(isEmpty(queuePtr))
        queuePtr -> front = queuePtr -> rear = 0;
    else
        queuePtr -> rear++;
    queuePtr -> data[queuePtr -> rear] = num;
}

int dequeue(struct Queue *queuePtr){
    if(isEmpty(queuePtr)){
        printf("Queue underflow!!\n");
        return -1;
    }
    
    int removed = queuePtr -> data[queuePtr -> front];
    queuePtr -> front++;

    if(queuePtr -> front > queuePtr -> rear)
        queuePtr -> front = queuePtr -> rear = -1;
    
        return removed;
}

int peek(struct Queue *queuePtr){
    
    if(isEmpty(queuePtr)){
        printf("Queue is empty!!\n");
        return -1;
    }
        
    return queuePtr -> data[queuePtr -> front];
}

void display(struct Queue *queuePtr){
    printf("Elements in the queue:\n");

    if(isEmpty(queuePtr)){
        printf("Queue is empty!!!\n");
        return;
    }

    for(int i = queuePtr -> front; i <= queuePtr -> rear; i++)
        printf("%d\n", queuePtr -> data[i]);
}

int size(struct Queue *queuePtr){
    
    if(isEmpty(queuePtr))
        return 0;
    else
        return queuePtr -> rear - queuePtr -> front + 1;
    
}

void clear(struct Queue *queuePtr){
    queuePtr -> front = queuePtr -> rear = -1;
}

