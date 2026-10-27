#include <stdio.h>
#include <stdlib.h>
struct Queue
{
    int size;
    int front;
    int rear;
    int count;
    int *arr;
};

int isFull(struct Queue *q)
{
    if ((q->rear+1)%q->size == q->front)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isEmpty(struct Queue *q)
{
    if (q->front == q->rear)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void enqueue(struct Queue *q)
{
    q->rear=(q->rear+1)%q->size;
    printf("Enter Element: ");
    scanf("%d", &q->arr[q->rear]);
    q->count++;
}

void dequeue(struct Queue *q)
{
        q->front=(q->front+1)%q->size;
        printf("%d has been removed from the queue\n", q->arr[q->front]);
        q->count--;
}

void PeekAtFront(struct Queue *q)
{
    printf("FrontMost Element: %d\n", q->arr[q->front+1]);
}

void PeekAtRear(struct Queue *q)
{
    printf("RearMost Element: %d", q->arr[q->rear]);
}

void Display(struct Queue *q, int front, int rear)
{
    printf("Elements inside queue:\n");
    for (int i = q->front+1; i <= q->rear; i++)
    {
        printf("%d ", q->arr[i]);
    }
}

void elementCount(struct Queue *q)
{
    printf("Number Of Element In Queue: %d\n", q->count);
}

int main()
{
    struct Queue *q;
    q = (struct Queue *)malloc(sizeof(struct Queue));
    q->arr = NULL;
    q->count = 0;
    q->front = 0;
    q->rear =  0;
    while (1)
    {
        printf("\n****Operations On Queue*****\n\n");
        printf("1.Define the size of array\n2.To Enqueue\n3.To Dequeue\n4.Peek (Front)\n5.Peek (Rear)\n6.Status Of Queue\n7.Display The Element Inside Queue\n8.Count the number of element in queue\n9.Exit\n\n");
        printf("Choose an option between 1 to 7 and 8 to exit:\n");
        int op;
        scanf("%d", &op);

        if (op == 9)
        {
            printf("\nProgram Finished");
            printf("\n\n**********Program Created By**********\n Name: Rohan Bisht\n Course: BCA=II(E1 Section)\n Roll No. 23041446\n");
            free(q->arr);
            free(q);
            break;
        }
        if (op < 9)
        {
            switch (op)
            {
            case 1:
                printf("Enter the size of array: ");
                scanf("%d", &q->size);
                q->size++;
                q->arr = (int *)malloc(q->size * sizeof(int));
                break;

            case 2:
                if (q->arr != NULL)
                {
                    if (isFull(q))
                    {
                        printf("Queue is Full!\n");
                        break;
                    }
                    else
                    {
                        enqueue(q);
                        break;
                    }
                }
                else
                {
                    printf("No queue is defined yet!\n");
                    break;
                }
            case 3:
                if (q->arr != NULL)
                {
                    if (isEmpty(q))
                    {
                        printf("Queue is Empty!\n");
                        break;
                    }
                    else
                    {
                        dequeue(q);
                        break;
                    }
                }
                else
                {
                    printf("No queue is defined yet!\n");
                    break;
                }
            case 4:
                if (q->arr != NULL)
                {
                    if (isEmpty(q))
                    {
                        printf("No Element Found To Peek!\n");
                        break;
                    }
                    else
                    {
                        PeekAtFront(q);
                        break;
                    }
                }
                else
                {
                    printf("No queue is defined yet!\n");
                    break;
                }
            case 5:
                if (q->arr != NULL)
                {
                    if (isEmpty(q))
                    {
                        printf("No Element Found To Peek!\n");
                        break;
                    }
                    else
                    {
                        PeekAtRear(q);
                        break;
                    }
                }
                {
                    printf("No queue is defined yet!\n");
                    break;
                }
            case 6:
                if (q->arr != NULL)
                {
                    if (isFull(q))
                    {
                        printf("Queue is full!\n");
                    }
                    else
                    {
                        printf("Queue is not full!\n");
                    }
                    if (isEmpty(q))
                    {
                        printf("Queue is empty!\n");
                        break;
                    }
                    else
                    {
                        printf("Queue is not empty!\n");
                        break;
                    }
                }
                else
                {
                    printf("No queue is defined!\n");
                    break;
                }
            case 7:
                if (q->arr != NULL)
                {
                    Display(q, q->front, q->rear);
                    break;
                }
                else
                {
                    printf("No Queue is defined!\n");
                    break;
                }
            case 8:
                if (q->arr != NULL)
                {
                    elementCount(q);
                    break;
                }
                else
                {
                    printf("No queue is defined!\n");
                    break;
                }
            }
        }
        else
        {
            printf("\nNot a valid option!\n");
        }
    }
    return 0;
}