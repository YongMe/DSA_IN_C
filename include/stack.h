# ifndef STACK_H
# define STACK_H
# define STACK_SIZE 100

struct Stack{
    int data[STACK_SIZE];
    int top;
};

struct Stack* initialize();

void push(struct Stack *stack, int num);

int pop(struct Stack *stack);

int peek(struct Stack *stack);

int isEmpty(struct Stack *stack);

int isFull(struct Stack *stack);

void clear(struct Stack *stackPtr);

void display(struct Stack *stackPtr);

int size(struct Stack *stackPtr);

# endif