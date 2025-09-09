#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

void traverse(struct Node *ptr)
{
    while(ptr!=NULL)
    {
        printf("ELement is = %d \n",ptr->data);
        ptr=ptr->next;
    }
}


int main() {
    // Allocate nodes
    struct Node *head = (struct Node*)malloc(sizeof(struct Node));
    struct Node *second = (struct Node*)malloc(sizeof(struct Node));
    struct Node *third = (struct Node*)malloc(sizeof(struct Node));

    // Assign data
    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = NULL; // Last node

    // Traverse the list
    traverse(head);

    // Free memory
    free(head);
    free(second);
    free(third);

    return 0;
}
