#include <stdio.h>

int main(){
    int m, n;
    printf("No. of rows: ");
    scanf("%d", &m);
    printf("No. of columns: ");
    scanf("%d", &n);

    int mat[m][n];

    printf("Enter elements of the matrix:-\n");
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            printf("(%d x %d): ", i, j);
            scanf("%d", (&mat[i][j]));
        }
    }

    printf("Transpose of the matrix is:-\n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            printf("%d ", mat[j][i]);
        }
        printf("\n");
    }
}