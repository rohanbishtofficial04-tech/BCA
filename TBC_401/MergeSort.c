#include <stdio.h>
#include<stdlib.h>
void merge(int arr[], int low, int mid, int high) {
    int left = low;
    int right = mid+1;
    int size= (high-low)+1;
    int *temp = (int *)malloc(size * sizeof(int));
    int i=0;
    while(left<=mid && right<=high){
        if(arr[left]<=arr[right]){
            temp[i]=arr[left];
            left++;
            i++;
        }
        else{
            temp[i]=arr[right];
            right++;
            i++;
        }
    }
    while(left<=mid){
        temp[i]=arr[left];
        left++;
        i++;
    }
    while(right<=high){
        temp[i]=arr[right];
        right++;
        i++;
    }

    for (int j = 0; j < size; j++) {
        arr[low + j] = temp[j];
    }

    free(temp);f
}

void mergeSort(int arr[], int low, int high) {
    if(low==high) return;
        int mid = (low + high) / 2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);
        merge(arr, low, mid, high);
    
}

int main() {
    int arr[] = {38, 27, 43, 3, 9, 82, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    mergeSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    return 0;
}
