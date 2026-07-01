// Find Middle of Linked List
 #include <stdio.h>
#include <stdlib.h>
struct Node 
{
    int data;
    struct Node *next;
};
void findMiddle(struct Node *head) {
    struct Node *slow = head;
    struct Node *fast = head;
    while (fast != NULL && fast->next != NULL) 
    {
        slow = slow->next;          
        fast = fast->next->next;    
    }
    printf("Middle Element = %d\n", slow->data);
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
    struct Node *fourth = (struct Node *)malloc(sizeof(struct Node));
    struct Node *fifth = (struct Node *)malloc(sizeof(struct Node));
    head->data = 10;
    head->next = second;
    second->data = 20;
    second->next = third;
    third->data = 30;
    third->next = fourth;
    fourth->data = 40;
    fourth->next = fifth;
    fifth->data = 50;
    fifth->next = NULL;
    printf("Linked List: ");
    printList(head);
    findMiddle(head);
    return 0;
}