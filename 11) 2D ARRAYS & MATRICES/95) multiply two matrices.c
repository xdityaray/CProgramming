// WAP to multiply two matrices
#include<stdio.h>

int main() {
    int r1, c1, r2, c2, i, j, k;
    
    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);
    
    int a[r1][c1];
    printf("Enter elements of first matrix:\n");
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c1; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    
    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);
    
    if(c1 != r2) {
        printf("Matrix multiplication not possible\n");
        return 0;
    }
    
    int b[r2][c2], result[r1][c2];
    
    printf("Enter elements of second matrix:\n");
    for(i = 0; i < r2; i++) {
        for(j = 0; j < c2; j++) {
            scanf("%d", &b[i][j]);
        }
    }
    
    // initialize result matrix
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c2; j++) {
            result[i][j] = 0;
        }
    }
    
    // multiply matrices
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c2; j++) {
            for(k = 0; k < c1; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    
    printf("Product of matrices:\n");
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
