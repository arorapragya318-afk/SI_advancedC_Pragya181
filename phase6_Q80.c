//Reverse a Linked List
#include <stdio.h>
#include <stdlib.h>
struct Node 
{
    int data;
    struct Node *next;
};
struct Node* reverse(struct Node *head) 
{
    struct Node *prev = NULL;
    struct Node *current = head;
    struct Node *next = NULL;
    while (current != NULL) 
    {
        next = current->next;   
        current->next = prev;   
        prev = current;         
        current = next;         
    }
    return prev; 
}
void printList(struct Node *head) 
{
    while (head != NULL) 
    {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}
int main() 
{
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    struct Node *second = (struct Node *)malloc(sizeof(struct Node));
    struct Node *third = (struct Node *)malloc(sizeof(struct Node));
    head->data = 10;
    head->next = second;
    second->data = 20;
    second->next = third;
    third->data = 30;
    third->next = NULL;
    printf("Original List: ");
    printList(head);
    head = reverse(head);
    printf("Reversed List: ");
    printList(head);
    return 0;
}