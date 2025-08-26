#include <stdio.h>

int main() {
    int i, sum = 0;

    for(i = 1; i <= 10; i = i+ 2) { 
    sum = sum + i;  
      }

    printf("Sum of odd (1 to 10) = %d\n", sum);
    return 0;
}

