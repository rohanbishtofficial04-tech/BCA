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
struct Node *InsertionAtBeginning(struct Node* head,int data){
    struct Node* ptr;
    ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr->data=data;

    struct Node* p=head->next;
    while(p->next!=head){
        p=p->next;
    }
    p->next=ptr;
    ptr->next=head;
    head=ptr;
    return head;
}
int main(){
    struct Node* head,*second,*third,*fourth;

    head=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));
    fourth=(struct Node*)malloc(sizeof(struct Node));

    head->data=2;
    head->next=second;

    second->data=3;
    second->next=third;

    third->data=4;
    third->next=fourth;

    fourth->data=5;
    fourth->next=head;

    head=InsertionAtBeginning(head,1);
    traversal(head);
}