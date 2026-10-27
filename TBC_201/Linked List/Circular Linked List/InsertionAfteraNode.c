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
struct Node *InsertionAtIndex(struct Node* head,int data,int index){
    struct Node* ptr;
    ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr->data=data;

    struct Node* p=head;
    int i=0;
    while(i!=index){
        p=p->next;
        i++;
    }
    ptr->next=p->next;
    p->next=ptr;
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

    third->data=4;
    third->next=fourth;

    fourth->data=5;
    fourth->next=head;

    head=InsertionAtIndex(head,3,1);
    traversal(head);
}