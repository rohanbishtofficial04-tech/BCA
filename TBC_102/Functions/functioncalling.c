#include<stdio.h>
void australia(){
    printf("Australia\n");
    return;
}
void england(){
    australia();
    printf("England\n");
    return;
}
void india(){
    england();
    printf("India\n");
    return;
}
int main(){
    india();
    return 0;
}