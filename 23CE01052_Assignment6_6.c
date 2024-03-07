#include <stdio.h>

float average(float arr[]){
    float avg = 0;

    for(int i = 0; i < 7; i++){
        avg += arr[i];
    }

    avg /= 7;
    return avg;
}

int main(){
    int n;
    printf("No of cities: ");
    scanf("%d", &n);

    float arr[n][7];

    for(int i = 0; i < n; i++){
        printf("Enter temperatures for a week for city %d:-\n", i);
        for(int j = 0; j < 7; j++){
            printf("day %d: ", j);
            scanf("%f", (&arr[i][j]));
        }
    }

    for(int i = 0; i < n; i++){
        printf("%.2f ", average(arr[i]));
    }
    return 0;
}