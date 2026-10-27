#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int size;
    int top;
    int *arr;
    int count;
};

int isEmpty(struct stack *p)
{
    if (p->top == -1)
        return 1;
    else
        return 0;
}

int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
        return 1;
    else
        return 0;
}

void push(struct stack *s, int val)
{
    s->top++;
    s->arr[s->top] = val;
    s->count++;
}

void pop(struct stack *s)
{
    printf("%d Has Been Popped Sucessfully From The Stack!\n\n", s->arr[s->top]);
    s->top--;
    s->count--;
}

void printElements(struct stack *s,int top)
{
    if (top == -1)
    {
        printf("\nNo Elements Found In The Stack Currently!\n\n");
    }
    while (top != -1)
    {
        printf("%d ", s->arr[top]);
        top--;
    }
    printf("\n");
}

int *resizeArray(struct stack *s, int newsize)
{
    int *ptr;
    ptr = (int *)realloc(s->arr, newsize * sizeof(int));
    s->size = newsize;
    return ptr;
}

void isPalindrome(struct stack *s)
{
    struct stack *t;
    t = (struct stack *)malloc(sizeof(struct stack));
    int flag = 1;
    int top = s->top;
    t->size = s->size;
    t->top = s->top;
    t->arr = (int *)malloc(sizeof(int));
    for (int i = 0; i < t->size; i++)
    {
        t->arr[i] = s->arr[top];
        top--;
    }
    for (int i = 0; i < t->size; i++)
    {
        if (s->arr[i] != t->arr[i])
        {
            flag = 0;
            break;
        }
    }
    if (flag == 1)
        printf("Entered Stack Is A Palindrome!\n\n");
    else
        printf("Entered Stack Is Not A Palindrome!\n\n");
    free(t);
}

void peek(struct stack *s)
{
    printf("Top Element: %d\n\n", s->arr[s->top]);
}

void elementCount(struct stack *s)
{
    printf("Number Of Elements In Stack Currently: %d\n\n", s->count);
}

int main()
{
    struct stack *s;
    s->arr = NULL;
    s->count = 0;
    int op;
    while (1)
    {
        printf("*********OPERATIONS ON STACK*********\n\n");
        printf("1. Define The Size Of Stack / Define The Size Of New Stack\n2. Push An Element In The Stack\n3. Pop An Element In The Stack\n4. Display The Status Of Stack\n5. Display All The Elements Of Stack\n6. Resize The Pre-Existing Stack\n");
        printf("7. Check Whether The Stack Is Palindrome Or Not\n8. Display The Topmost Element In The Stack (Peek)\n9. Display The Number Of Elements In The Stack\n10. Exit And Free The Allocated Memory\n");
        printf("\nChoose An Option Between 1 And 9 And 10 to Exit\n");
        scanf("%d", &op);
        if (op == 10)
        {
            printf("\nProgram Finished!");
            printf("\n\n**********Program Created By**********\n Name: Rohan Bisht\n Course: BCA=II(E1 Section)\n Roll No. 23041446\n");
            free(s);
            free(s->arr);
            break;
        }
        if (op <= 9)
        {
            switch (op)
            {
            case 1:
                printf("Enter The Size Of Stack:\n");
                s->top = -1;
                scanf("%d", &s->size);
                s->arr = (int *)malloc(sizeof(int));
                printf("\n");
                break;

            case 2:
                if (s->arr == NULL)
                {
                    printf("No Stack Is Defined Yet!\n\n");
                    break;
                }
                else if (isFull(s))
                {
                    printf("Stack is Full (Overflow)!\n\n");
                    break;
                }
                else
                {
                    int val;
                    printf("Enter An Element To Push: \n");
                    scanf("%d", &val);
                    push(s, val);
                    break;
                }

            case 3:
                if (s->arr != NULL)
                {
                    if (isEmpty(s))
                    {
                        printf("Stack is Empty (Underflow)!\n");
                        break;
                    }
                    else
                    {
                        pop(s);
                        break;
                    }
                }
                else
                {
                    printf("No Stack Is Defined Yet!\n\n");
                    break;
                }
            case 4:
                if (s->arr != NULL)
                {
                    if (isEmpty(s))
                    {
                        printf("Stack is Empty (Underflow)!\n");
                    }
                    else
                    {
                        printf("Stack Is Not Empty!\n");
                    }

                    if (isFull(s))
                    {
                        printf("Stack Is Full!\n\n");
                        break;
                    }
                    else
                    {
                        printf("Stack Is Not Full!\n\n");
                        break;
                    }
                }
                else
                {
                    printf("No Stack Is Defined Yet\n\n!");
                    break;
                }

            case 5:
                if (s->arr != NULL)
                {
                    printElements(s,s->top);
                    break;
                }
                else
                {
                    printf("No Stack Is Defined Yet!\n\n!");
                    break;
                }

            case 6:
                if (s->arr != NULL)
                {
                    int newsize;
                    printf("Enter The New Size For The Pre-Existing Stack:\n");
                    scanf("%d", &newsize);
                    printf("The Stack Has Been Resized From %d Element Capacity to %d Element Capacity Successfully!\n\n", s->size, newsize);
                    s->arr = resizeArray(s, newsize);
                    break;
                }
                else
                {
                    printf("There Is No Existing Stack To Resize!\n\n");
                    break;
                }
            case 7:
                if (s->arr != NULL)
                {
                    if (isEmpty(s))
                    {
                        printf("There Are No Elements Found In The Stack To Check!\n\n");
                        break;
                    }
                    else
                    {
                        isPalindrome(s);
                        break;
                    }
                }
                else
                {
                    printf("There Is No Stack Defined To Check!\n\n");
                    break;
                }
            case 8:
                if (isEmpty(s))
                {
                    printf("No Element Found To Peek!\n\n");
                    break;
                }
                else
                {
                    if (s->arr != NULL)
                    {
                        peek(s);
                        break;
                    }
                    else
                    {
                        printf("No Stack Is Defined Yet!\n\n");
                        break;
                    }
                }
            case 9:
                if (isEmpty(s))
                {
                    printf("Stack Is Empty!\n\n");
                    break;
                }
                else
                {
                    if (s->arr != NULL)
                    {
                        elementCount(s);
                        break;
                    }
                    else
                    {
                        printf("No Stack Is Defined Yet!\n\n");
                        break;
                    }
                }
            }
        }
        else
        {
            printf("Not A Vaid Option.\n\n");
        }
    }
    return 0;
}