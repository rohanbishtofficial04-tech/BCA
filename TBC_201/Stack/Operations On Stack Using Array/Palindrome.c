#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int size;
    int top;
    int *arr;
};
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
int main()
{
    struct stack *s;
    s = (struct stack *)malloc(sizeof(struct stack));
    s->top = -1;
    printf("Enter The Size Of Stack:\n");
    scanf("%d", &s->size);
    s->arr = (int *)calloc(s->size, sizeof(int));
    for (int i = 0; i < s->size; i++)
    {
        int val;
        printf("Enter Value %d: \n",i+1);
        scanf("%d",&val);
        s->top++;
        s->arr[s->top] = val;
    }
    isPalindrome(s);
    return 0;
}