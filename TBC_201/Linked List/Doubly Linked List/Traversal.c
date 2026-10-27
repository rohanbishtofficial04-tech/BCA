#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* next;
    struct Node* prev;
};
void ForwardTraversal(struct Node* head){
    struct Node* p=head;
    while(p!=NULL){
        printf("Element: %d\n",p->data);
        p=p->next;
    }
}
void ReverseTraversal(struct Node* head){
    struct Node* p=head;
    while(p->next!=NULL){
        p=p->next;
    }
    while(p!=NULL){
    printf("Element: %d\n",p->data);
    p=p->prev;
    }
}
int main(){
    struct Node* head;
    struct Node* second;
    struct Node* third;
    struct Node* fourth;

    head=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));
    fourth=(struct Node*)malloc(sizeof(struct Node));

    head->data=1;
    head->next=second;
    head->prev=NULL;

    second->data=2;
    second->next=third;
    second->prev=head;

    third->data=3;
    third->next=fourth;
    third->prev=second;

    fourth->data=4;
    fourth->next=NULL;
    fourth->prev=third;

    ForwardTraversal(head);
    printf("\n");
    ReverseTraversal(head);
}