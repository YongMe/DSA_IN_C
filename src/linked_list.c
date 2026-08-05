# include <linked_list.h>
# include <stdio.h>
# include <stdlib.h>

struct Node* createNode(int data){
    struct Node *newNode = malloc(sizeof(struct Node));

    if(newNode == NULL){
        // printf("Memory allocation failed");
        return NULL;
    }
    newNode -> data = data;
    newNode -> next = NULL;

    return newNode;

} // no semicolon 'cause prototype declared already

struct Node* insertFront(struct Node *head, int data){
    
    struct Node* newNode = createNode(data);

    newNode -> next = head;
    
    return newNode;
}