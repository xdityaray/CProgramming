// WAP to find row with maximum 1s in binary matrix
#include<stdio.h>

int main() {
    int rows, cols, i, j, count, maxCount = 0, maxRow = 0;
    
    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);
    
    int mat[rows][cols];
    
    printf("Enter binary matrix elements (0 or 1):\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    
    for(i = 0; i < rows; i++) {
        count = 0;
        for(j = 0; j < cols; j++) {
            if(mat[i][j] == 1) {
                count++;
            }
        }
        if(count > maxCount) {
            maxCount = count;
            maxRow = i;
        }
    }
    
    printf("Row %d has maximum 1s = %d\n", maxRow, maxCount);
    
    return 0;
}
