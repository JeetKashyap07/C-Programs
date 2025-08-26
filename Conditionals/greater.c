//greatest element
#include <stdio.h>

int main() {
    float a, b, c, max;


    printf("Enter three numbers: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a > b && a > c)
        max = a;
    else if (b > c)
        max = b;
    else
        max = c;

    printf("You knew it and still you asked, but wtv man its: %.2f\n", max);

    return 0;
}
