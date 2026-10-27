#include<stdio.h>
void palindrome(int arr[]){
    int p=0;
    for(int i=0,j=8;i<j;i++,j--){
        if(arr[i]!=arr[j]){
            p=1;
            break;
        }
    }
    if(p==0) printf("palindrome");
    else printf("not a palindrome");
    return;
}
int main(){
    int arr[9]={1,2,3,4,5,4,3,2,1};
    palindrome(arr);
    return 0;
}