#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
void search(struct Node *p,int num){
    int flag=0;
    while(p != NULL){
        if(p->data==num){
        printf("Element Found: %d ",p->data);
        flag=1;
        break;
        }
        p=p->next;
    }
    if(flag==0)
    printf("Element Not Found");
}
int main(){
    struct Node *head,*second,*third;

    head=(struct Node *)malloc(sizeof(struct Node));
    second=(struct Node *)malloc(sizeof(struct Node));
    third=(struct Node *)malloc(sizeof(struct Node));

    head->data=1;
    head->next=second;

    second->data=2;
    second->next=third;

    third->data=3;
    third->next=NULL;

    search(head,4);

    free(head);
    free(second);
    free(third);

    return 0;
}