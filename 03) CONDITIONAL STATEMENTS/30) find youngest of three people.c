// WAP to find youngest of three people
#include<stdio.h>

int main() {
    int age1, age2, age3;
    
    printf("Enter ages of three people: ");
    scanf("%d %d %d", &age1, &age2, &age3);
    
    if(age1 < age2 && age1 < age3) {
        printf("Person 1 is youngest with age %d\n", age1);
    }
    else if(age2 < age3) {
        printf("Person 2 is youngest with age %d\n", age2);
    }
    else {
        printf("Person 3 is youngest with age %d\n", age3);
    }
    
    return 0;
}
