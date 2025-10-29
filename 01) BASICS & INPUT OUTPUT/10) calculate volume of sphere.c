// WAP to calculate volume of sphere
#include<stdio.h>

int main() {
    float radius, volume;
    
    printf("Enter radius of sphere: ");
    scanf("%f", &radius);
    
    volume = (4.0/3.0) * 3.14 * radius * radius * radius;
    
    printf("Volume of sphere = %.2f\n", volume);
    
    return 0;
}
