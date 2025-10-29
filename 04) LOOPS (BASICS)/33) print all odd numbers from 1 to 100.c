// WAP to print all odd numbers from 1 to 100
#include<stdio.h>

int main() {
    int i;
    
    printf("Odd numbers from 1 to 100:\n");
    
    for(i = 1; i <= 100; i += 2) {
        printf("%d ", i);
    }
    printf("\n");
    
    return 0;
}
