// WAP to calculate simple interest
#include<stdio.h>

int main() {
    float p, r, t, si;
    
    printf("Enter principal amount: ");
    scanf("%f", &p);
    
    printf("Enter rate of interest: ");
    scanf("%f", &r);
    
    printf("Enter time period (in years): ");
    scanf("%f", &t);
    
    si = (p * r * t) / 100;
    
    printf("Simple Interest = %.2f\n", si);
    
    return 0;
}
