#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};

struct Queue
{
    struct Node *front;
    struct Node *rear;
    int count;
    int max_count;
};

void initQueue(struct Queue *s)
{
    s->front = NULL;
    s->rear = NULL;
    s->count = 0;
    s->max_count = -1;
}

int isEmpty(struct Queue *s)
{
    if (s->count == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(struct Queue *s)
{
    if (s->count == s->max_count)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void enqueue(struct Queue *s, int val)
{
    struct Node *newNode;
    newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = val;
    newNode->next = NULL;
    s->count++;
    if (s->front == NULL)
    {
        s->front = s->rear = newNode;
    }
    else
    {
        s->rear->next = newNode;
        s->rear = newNode;
        s->rear->next = s->front;
    }
}

void dequeue(struct Queue *s)
{
    struct Node *n = s->front;
    printf("%d Has Been Popped From The Queue Successfully!\n", s->front->data);
    s->front = s->front->next;
    s->rear->next = s->front;
    free(n);
    s->count--;
}

void countElement(struct Queue *s)
{
    printf("Number Of Element In Queue: %d\n", s->count);
}

void linkedlisttraversal(struct Node *p, struct Queue *s)
{
    printf("Element Inside The Queue:\n");
    if (s->count != 1)
    {
        do
        {
            printf("%d ", p->data);
            p = p->next;
        } while (p != s->front);
    }
    else
    {
        printf("%d",s->front->data);
    }
    printf("\n");
}

void peek(struct Queue *s)
{
    printf("Frontmost Element: %d\n", s->front->data);
    if (s->front == s->rear)
    {
        printf("RearMost Element: %d (Since There Is Only One Element In The Queue, Thats Why FrontMost Element Is Equal To RearMost Element)\n\n", s->rear->data);
    }
    else
    {
        printf("RearMost Element: %d\n\n", s->rear->data);
    }
}

int main()
{
    struct Queue *s;
    s->count = 0;

    while (1)
    {
        int op;
        printf("\n*********OPERATIONS ON Queue*********\n\n");
        printf("1. Define The Size Of Queue / Define The Size Of New Queue (Don't Use This Option If You Don't Want To Limit Your Queue)\n2. Push An Element In The Queue\n3. Pop An Element In The Queue\n4. Display The Status Of Queue\n5. Display All The Elements Of Queue\n");
        printf("6. Display The FrontMost And RearMost Element In The Queue (Peek)\n7. Display The Number Of Elements In The Queue\n8. Exit And Free The Allocated Memory\n");
        printf("\nChoose An Option Between 1 And 7 And 8 to Exit\n");
        scanf("%d", &op);
        if (op == 8)
        {
            printf("\nProgram Finished!");
            free(s);
            break;
        }
        if (op <= 8)
        {
            switch (op)
            {
            case 1:
                s = (struct Queue *)malloc(sizeof(struct Queue));
                initQueue(s);
                printf("Enter Size Of Queue: ");
                scanf("%d", &s->max_count);
                break;

            case 2:
                if (isFull(s))
                {
                    printf("Queue is Full (Overflow)!\n\n");
                    break;
                }
                else
                {
                    int val;
                    printf("Enter Element To Push: ");
                    scanf("%d", &val);
                    enqueue(s, val);
                    break;
                }
            case 3:
                if (isEmpty(s))
                {
                    printf("Queue is Empty (Underflow)!\n");
                    break;
                }
                else
                {
                    dequeue(s);
                    break;
                }

            case 4:
                if (isEmpty(s))
                {
                    printf("\nQueue Is Empty(Underflow)!\n");
                }
                else
                {
                    printf("\nQueue Is Not Empty!\n");
                }
                if (isFull(s))
                {
                    printf("Queue Is Full(Overflow)!\n");
                    break;
                }
                else
                {
                    printf("Queue Is Not Full!\n");
                    break;
                }

            case 5:
                if (s->front == NULL)
                {
                    printf("Queue is empty\n");
                    break;
                }
                else
                {
                    linkedlisttraversal(s->front, s);
                    break;
                }

            case 6:
                if (isEmpty(s))
                {
                    printf("Queue is Empty (Underflow)!\n");
                    break;
                }
                else
                {
                    peek(s);
                    break;
                }

            case 7:
                countElement(s);
                break;
            }
        }
        else
        {
            printf("Not A Valid Option\n");
        }
    }
    return 0;
}