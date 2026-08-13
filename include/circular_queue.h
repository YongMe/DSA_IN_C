# ifndef CIRCULAR_QUEUE_H
# define CIRCULAR_QUEUE_H



struct CircularQueue;

struct CircularQueue* initialize(int size_queue);

int isEmpty(struct CircularQueue *queue);

int isFull(struct CircularQueue *queue);

void enqueue(struct CircularQueue *queue, int num);

int dequeue(struct CircularQueue *queue);

int peek(struct CircularQueue *queue);

void display(struct CircularQueue *queue);

int size(struct CircularQueue *queue);

void clear(struct CircularQueue *queue);


# endif