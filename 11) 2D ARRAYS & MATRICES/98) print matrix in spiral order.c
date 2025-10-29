// WAP to print matrix in spiral order
#include<stdio.h>

int main() {
    int rows, cols, i, j;
    int top = 0, bottom, left = 0, right;
    
    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);
    
    int mat[rows][cols];
    bottom = rows - 1;
    right = cols - 1;
    
    printf("Enter matrix elements:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    
    printf("Spiral order: ");
    
    while(top <= bottom && left <= right) {
        // print top row
        for(i = left; i <= right; i++) {
            printf("%d ", mat[top][i]);
        }
        top++;
        
        // print right column
        for(i = top; i <= bottom; i++) {
            printf("%d ", mat[i][right]);
        }
        right--;
        
        // print bottom row
        if(top <= bottom) {
            for(i = right; i >= left; i--) {
                printf("%d ", mat[bottom][i]);
            }
            bottom--;
        }
        
        // print left column
        if(left <= right) {
            for(i = bottom; i >= top; i--) {
                printf("%d ", mat[i][left]);
            }
            left++;
        }
    }
    printf("\n");
    
    return 0;
}
