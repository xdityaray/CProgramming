// WAP to rotate matrix 90 degrees clockwise
#include<stdio.h>

int main() {
    int n, i, j, temp;
    
    printf("Enter size of square matrix: ");
    scanf("%d", &n);
    
    int mat[n][n];
    
    printf("Enter matrix elements:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    
    // transpose
    for(i = 0; i < n; i++) {
        for(j = i+1; j < n; j++) {
            temp = mat[i][j];
            mat[i][j] = mat[j][i];
            mat[j][i] = temp;
        }
    }
    
    // reverse each row
    for(i = 0; i < n; i++) {
        for(j = 0; j < n/2; j++) {
            temp = mat[i][j];
            mat[i][j] = mat[i][n-1-j];
            mat[i][n-1-j] = temp;
        }
    }
    
    printf("Matrix after 90 degree rotation:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
