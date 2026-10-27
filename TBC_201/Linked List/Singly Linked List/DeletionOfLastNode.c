#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
void linkedlisttraversal(struct Node *p)
{
    while (p != NULL)
    {
        printf("Element: %d\n", p->data);
        p = p->next;
    }
}
void *DeletionOfLastNode(struct Node *head)
{
    struct Node *p=head;
    struct Node *q=head->next;
    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next=NULL;
    free(q);
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

    DeletionOfLastNode(head);
    linkedlisttraversal(head);

    free(head);
    free(second);

    return 0;
}