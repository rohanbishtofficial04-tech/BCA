#include<stdio.h>
#include<string.h>
int main(){
    typedef struct
    {
        char name[20];
        int price;
        int pages;
    }book;
    book a;
    strcpy(a.name,"Atomic Habits");
    a.price=300;
    a.pages=500;

    printf("Book Name: %s\n",a.name);
    printf("Price: %d\n",a.price);
    printf("No. Of Pages: %d",a.pages);
    return 0;
}