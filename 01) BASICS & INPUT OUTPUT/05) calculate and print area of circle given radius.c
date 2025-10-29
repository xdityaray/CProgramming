// WAP to calculate and print area of circle given radius
#include<stdio.h>

int main() {
    float radius, area;
    
    printf("Enter radius: ");
    scanf("%f", &radius);
    
    area = 3.14 * radius * radius;
    
    printf("Area of circle = %.2f\n", area);
    
    return 0;
}
