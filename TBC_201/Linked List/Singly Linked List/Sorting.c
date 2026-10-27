#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
void linkedlisttraversal(struct Node *p){
    while(p!=NULL){
        printf("%d ",p->data);
        p=p->next;
    }
}
void LinkedListSort(struct Node* head){
    struct Node* p1=head;
    struct Node* p2=head->next;
    int temp;
    while(p1->next!=NULL){
    while(p2!=NULL){
        if(p1->data>p2->data){
        temp=p1->data;
        p1->data=p2->data;
        p2->data=temp;
        }
        p2=p2->next;
    }
    p1=p1->next;
    p2=p1->next;
    }
}
int main(){
    struct Node *head,*second,*third,*fourth;

    head=(struct Node *)malloc(sizeof(struct Node));
    second=(struct Node *)malloc(sizeof(struct Node));
    third=(struct Node *)malloc(sizeof(struct Node));
    fourth=(struct Node *)malloc(sizeof(struct Node));

    head->data=4;
    head->next=second;

    second->data=3;
    second->next=third;

    third->data=2;
    third->next=fourth;

    fourth->data=1;
    fourth->next=NULL;

    printf("Linked List Before Sorting: ");
    linkedlisttraversal(head);
    LinkedListSort(head);
    printf("\nLinked List After Sorting:  ");
    linkedlisttraversal(head);

    free(head);
    free(second);
    free(third);
    free(fourth);

    return 0;
}