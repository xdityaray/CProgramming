// WAP to calculate percentage of 5 subjects
#include<stdio.h>

int main() {
    float sub1, sub2, sub3, sub4, sub5;
    float total, percentage;
    
    printf("Enter marks of 5 subjects: ");
    scanf("%f %f %f %f %f", &sub1, &sub2, &sub3, &sub4, &sub5);
    
    total = sub1 + sub2 + sub3 + sub4 + sub5;
    percentage = (total / 500) * 100;
    
    printf("Percentage = %.2f%%\n", percentage);
    
    return 0;
}
