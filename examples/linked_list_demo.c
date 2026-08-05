# include <stdio.h>
# include <stdlib.h>
# include "linked_list.h"

int main(){
    struct Node *head = createNode(25);

    if (head == NULL){
        printf("Failed to create node");
        return -1;
    }
    printf("Data: %d\n", head -> data);

    free(head);

    head = NULL;

    return 0;
}