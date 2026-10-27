#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* next;
};
void traversal(struct Node* head){
    struct Node* p=head;
    do{
        printf("Element: %d\n",p->data);
        p=p->next;
    }while(p!=head);
}
struct Node *InsertionAtTheEnd(struct Node* head,int data){
    struct Node* ptr;
    ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr->data=data;

    struct Node* p=head->next;
    while(p->next!=head){
        p=p->next;
    }
    p->next=ptr;
    ptr->next=head;
    return head;
}
int main(){
    struct Node* head,*second,*third,*fourth;

    head=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));
    fourth=(struct Node*)malloc(sizeof(struct Node));

    head->data=1;
    head->next=second;

    second->data=2;
    second->next=third;

    third->data=3;
    third->next=fourth;

    fourth->data=4;
    fourth->next=head;

    head=InsertionAtTheEnd(head,5);
    traversal(head);
}