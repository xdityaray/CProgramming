// WAP to solve Tower of Hanoi
#include<stdio.h>

void towerOfHanoi(int n, char source, char destination, char auxiliary) {
    if(n == 1) {
        printf("Move disk 1 from %c to %c\n", source, destination);
        return;
    }
    
    towerOfHanoi(n-1, source, auxiliary, destination);
    printf("Move disk %d from %c to %c\n", n, source, destination);
    towerOfHanoi(n-1, auxiliary, destination, source);
}

int main() {
    int n;
    
    printf("Enter number of disks: ");
    scanf("%d", &n);
    
    printf("\nSteps to solve Tower of Hanoi:\n");
    towerOfHanoi(n, 'A', 'C', 'B');
    
    return 0;
}
