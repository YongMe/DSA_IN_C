# ifndef LINKED_LIST_H
# define LINKED_LIST_H

struct Node{
    int data;
    struct Node *next; // pointer of type struct Node
};

struct Node* createNode(int data); // function prototype to create new nodes

struct Node* insertFront(struct Node *head, int data);


# endif