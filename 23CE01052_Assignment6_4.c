#include <stdio.h>

int checkSubset(int arr1[], int arr2[], int n, int m){
    for(int i = 0; i < m; i++){
        int check = 0;
        for(int j = 0; j < n; j++){
            if(arr1[j] == arr2[i])
                check = 1;
        }
        if(!check)
            return 0;
    }
    return 1;
}

int main(){
    int n;
    printf("Size of array 1: ");
    scanf("%d", &n);

    int arr1[n];
    printf("Enter the elements of the array 1:-\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d: ", i);
        scanf("%d", (&arr1[i]));
    }

    int m;
    printf("Size of array 2: ");
    scanf("%d", &m);

    int arr2[m];
    printf("Enter the elements of the array 2:-\n");
    for (int i = 0; i < m; i++)
    {
        printf("%d: ", i);
        scanf("%d", (&arr2[i]));
    }

    int isSubset;
    if(n > m){
        if(checkSubset(arr1, arr2, n, m)){
            printf("arr2[] is a subset of arr1[]\n");
            return 0;
        }
    }
    else{
        if(checkSubset(arr2, arr1, m, n)){
            printf("arr1[] is a subset of arr2[]\n");
            return 0;
        }
    }

    printf("None of the arrays is subset of another.\n");
    return 0;

}