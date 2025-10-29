// WAP to find row with maximum sum in matrix
#include<stdio.h>

int main() {
    int rows, cols, i, j, sum, maxSum, maxRow = 0;
    
    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);
    
    int mat[rows][cols];
    
    printf("Enter matrix elements:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    
    maxSum = 0;
    for(j = 0; j < cols; j++) {
        maxSum += mat[0][j];
    }
    
    for(i = 1; i < rows; i++) {
        sum = 0;
        for(j = 0; j < cols; j++) {
            sum += mat[i][j];
        }
        if(sum > maxSum) {
            maxSum = sum;
            maxRow = i;
        }
    }
    
    printf("Row %d has maximum sum = %d\n", maxRow, maxSum);
    
    return 0;
}
