// WAP to print grade based on percentage
#include<stdio.h>

int main() {
    float percentage;
    
    printf("Enter percentage: ");
    scanf("%f", &percentage);
    
    if(percentage >= 90) {
        printf("Grade: A\n");
    }
    else if(percentage >= 75) {
        printf("Grade: B\n");
    }
    else if(percentage >= 60) {
        printf("Grade: C\n");
    }
    else if(percentage >= 40) {
        printf("Grade: D\n");
    }
    else {
        printf("Grade: F\n");
    }
    
    return 0;
}
