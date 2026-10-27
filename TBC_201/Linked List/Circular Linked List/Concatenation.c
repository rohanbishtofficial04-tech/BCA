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
void concat(struct Node* head1,struct Node* head2){
    struct Node* p1=head1;
    struct Node* p2=head2;
    do{
        p1=p1->next;
    }while(p1->next!=head1);

    p1->next=head2;

    do{
        p2=p2->next;
    }while(p2->next!=head2);

    p2->next=head1;
    
}
int main(){
    struct Node* head1,*second1,*head2,*second2;

    head1=(struct Node*)malloc(sizeof(struct Node));
    second1=(struct Node*)malloc(sizeof(struct Node));
    head2=(struct Node*)malloc(sizeof(struct Node));
    second2=(struct Node*)malloc(sizeof(struct Node));

    head1->data=1;
    head1->next=second1;

    second1->data=2;
    second1->next=head1;

    head2->data=3;
    head2->next=second2;

    second2->data=4;
    second2->next=head2;

    concat(head1,head2);
    traversal(head1);
}