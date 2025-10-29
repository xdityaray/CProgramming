// WAP to find transpose of a matrix
#include<stdio.h>

int main() {
    int rows, cols, i, j;
    
    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);
    
    int mat[rows][cols], transpose[cols][rows];
    
    printf("Enter matrix elements:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            transpose[j][i] = mat[i][j];
        }
    }
    
    printf("Transpose of matrix:\n");
    for(i = 0; i < cols; i++) {
        for(j = 0; j < rows; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
