#include<stdio.h>
#include<stdlib.h>
struct stack{
    int size;
    int top;
    int *arr;
};
int isEmpty(struct stack *ptr){
    if(ptr->top==-1) return 1;
    else return 0;
}
int isFull(struct stack *ptr){
    if(ptr->top==ptr->size-1) return 1;
    else return 0;
}
int main(){
    struct stack *s;
    s->size=5;
    s->top=-1;
    s->arr=(int*)malloc(s->size*sizeof(int));

  /*s->arr[0]=1;
    s->top++;
    s->arr[1]=2;
    s->top++;
    s->arr[2]=3;
    s->top++;
    s->arr[3]=4;
    s->top++;
    s->arr[4]=5;
    s->top++;      //inserted numbers manually to check the function "isEmpty" is working or not.*/

    if(isEmpty(s)){
        printf("Stack is Empty\n");
    }
    else{
        printf("Stack is Not Empty\n");
    }
    if(isFull(s)){
        printf("Stack is Full\n");
    }
    else{
        printf("Stack is Not Full\n");
    } 
    return 0;
}