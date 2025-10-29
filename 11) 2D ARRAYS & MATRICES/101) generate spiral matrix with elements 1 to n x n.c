// WAP to generate spiral matrix with elements 1 to n x n
#include<stdio.h>

int main() {
    int n, i, num = 1;
    int top = 0, bottom, left = 0, right;
    
    printf("Enter size of matrix: ");
    scanf("%d", &n);
    
    int mat[n][n];
    bottom = n - 1;
    right = n - 1;
    
    while(top <= bottom && left <= right) {
        // fill top row
        for(i = left; i <= right; i++) {
            mat[top][i] = num++;
        }
        top++;
        
        // fill right column
        for(i = top; i <= bottom; i++) {
            mat[i][right] = num++;
        }
        right--;
        
        // fill bottom row
        if(top <= bottom) {
            for(i = right; i >= left; i--) {
                mat[bottom][i] = num++;
            }
            bottom--;
        }
        
        // fill left column
        if(left <= right) {
            for(i = bottom; i >= top; i--) {
                mat[i][left] = num++;
            }
            left++;
        }
    }
    
    printf("Spiral matrix:\n");
    for(i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
