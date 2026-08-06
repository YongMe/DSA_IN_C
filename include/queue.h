# ifndef QUEUE_H
# define QUEUE_H
# define QUEUE_SIZE 100


// - single ended queue

struct Queue{
    int data[QUEUE_SIZE];
    int rear;
    int front;
};

struct Queue* initialize();

int isEmpty(struct Queue *queue);

int isFull(struct Queue *queue);

void enqueue(struct Queue *queue, int num);

int dequeue(struct Queue *queue);


int peek(struct Queue *queue);

void display(struct Queue *queue);

int size(struct Queue *queue);

void clear(struct Queue *queue);




# endif