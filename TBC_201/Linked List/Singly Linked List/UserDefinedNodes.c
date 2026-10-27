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
        printf("%d ", p->data);
        p = p->next;
    }
}
int main()
{
    int n;
    struct Node *head;
    head = (struct Node *)malloc(sizeof(struct Node));
    head->next=NULL;
    printf("Enter No. Of Nodes: ");
    scanf("%d", &n);
    printf("Enter Element 1: ");
    scanf("%d", &head->data);
    struct Node *p = head;
    for (int i = 1; i < n; i++)
    {
        struct Node *newNode;
        newNode = (struct Node *)malloc(sizeof(struct Node));
        printf("Enter Element %d: ", i + 1);
        scanf("%d", &newNode->data);
        newNode->next = NULL;
        p->next = newNode;
        p = p->next;
    }

    linkedlisttraversal(head);

    return 0;
}