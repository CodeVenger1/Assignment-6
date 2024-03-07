#include<stdio.h>
void reverseArrayUsingRecursion(int a[],int,int);
int main(){
    int i, n;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array elements : ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Entered elements of array : ");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    reverseArrayUsingRecursion(arr, 0, (n-1));
    printf("\n");
    printf("The elements of array after reversal : ");
    for(i=0;i<n;i++) {
        printf("%d ",arr[i]);
    }
}
void reverseArrayUsingRecursion(int arr[], int start, int end){
    int temp;
    if(start >= end){
        return;
    }
    temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    reverseArrayUsingRecursion(arr, start+1, end-1);
}