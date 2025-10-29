// WAP to compare area and perimeter of rectangle
#include<stdio.h>

int main() {
    int length, breadth, area, perimeter;
    
    printf("Enter length and breadth: ");
    scanf("%d %d", &length, &breadth);
    
    area = length * breadth;
    perimeter = 2 * (length + breadth);
    
    printf("Area = %d\n", area);
    printf("Perimeter = %d\n", perimeter);
    
    if(area > perimeter) {
        printf("Area is greater\n");
    }
    else if(perimeter > area) {
        printf("Perimeter is greater\n");
    }
    else {
        printf("Both are equal\n");
    }
    
    return 0;
}
