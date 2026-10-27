#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};

struct stack
{
    struct Node *top;
    int count;
    int max_count;
};

void initStack(struct stack *s)
{
    s->top = NULL;
    s->count = 0;
    s->max_count = -1;
}

int isEmpty(struct stack *s)
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

int isFull(struct stack *s)
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

struct Node *push(struct Node *p, struct stack *s, int val)
{
    struct Node *n;
    n = (struct Node *)malloc(sizeof(struct Node));
    n->data = val;
    n->next = p;
    s->count++;
    return n;
}

struct Node *pop(struct Node *top, struct stack *s)
{
    struct Node *n = top;
    printf("%d Has Been Popped From The Stack Successfully!\n", top->data);
    top = top->next;
    free(n);
    s->count--;
    return top;
}

void countElement(struct stack *s)
{
    printf("Number Of Element In Stack: %d\n", s->count);
}

void linkedlisttraversal(struct Node *p)
{
    printf("Element Inside The Stack:\n");
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

void peek(struct stack *s)
{
    printf("Topmost Element: %d", s->top->data);
}

int main()
{
    struct stack *s;
    s->count = 0;

    while (1)
    {
        int op;
        printf("\n*********OPERATIONS ON STACK*********\n\n");
        printf("1. Define The Size Of Stack / Define The Size Of New Stack (Don't Use This Option If You Don't Want To Limit Your Stack)\n2. Push An Element In The Stack\n3. Pop An Element In The Stack\n4. Display The Status Of Stack\n5. Display All The Elements Of Stack\n");
        printf("6. Display The Topmost Element In The Stack (Peek)\n7. Display The Number Of Elements In The Stack\n8. Exit And Free The Allocated Memory\n");
        printf("\nChoose An Option Between 1 And 9 And 10 to Exit\n");
        scanf("%d", &op);
        if (op == 8)
        {
            printf("\nProgram Finished!");
            printf("\n\n**********Program Created By**********\n Name: Rohan Bisht\n Course: BCA=II(E1 Section)\n Roll No. 23041446\n");
            break;
        }
        if (op <= 8)
        {
            switch (op)
            {
            case 1:
                s = (struct stack *)malloc(sizeof(struct stack));
                initStack(s);
                printf("Enter Size Of Stack: ");
                scanf("%d", &s->max_count);
                break;

            case 2:
                if (isFull(s))
                {
                    printf("Stack is Full (Overflow)!\n\n");
                    break;
                }
                else
                {
                    int val;
                    printf("Enter Element To Push: ");
                    scanf("%d", &val);
                    s->top = push(s->top, s, val);
                    break;
                }
            case 3:
                if (isEmpty(s))
                {
                    printf("Stack is Empty (Underflow)!\n");
                    break;
                }
                else
                {
                    s->top = pop(s->top, s);
                    break;
                }

            case 4:
                if (isEmpty(s))
                {
                    printf("\nStack Is Empty(Underflow)!\n");
                }
                else
                {
                    printf("\nStack Is Not Empty!\n");
                }
                if (isFull(s))
                {
                    printf("Stack Is Full(Overflow)!\n");
                    break;
                }
                else
                {
                    printf("Stack Is Not Full!\n");
                    break;
                }

            case 5:
                linkedlisttraversal(s->top);
                break;

            case 6:
                if (isEmpty(s))
                {
                    printf("Stack is Empty (Underflow)!\n");
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