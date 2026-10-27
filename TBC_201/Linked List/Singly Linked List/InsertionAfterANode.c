#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
void linkedlisttraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}
void InsertionAtIndex(struct Node *head,int index,int data)
{
    struct Node *ptr;
    ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data=data;
    struct Node *p=head;

    int i=0;
    while (i != index)
    {
        p=p->next;
        i++;
    }
    ptr->next=p->next;
    p->next=ptr;
}
int main()
{

    struct Node *head;
    struct Node *second;
    struct Node *third;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;

    InsertionAtIndex(head,1,9);
    linkedlisttraversal(head);

    free(head);
    free(second);
    free(third);

    return 0;
}