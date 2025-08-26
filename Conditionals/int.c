#include <stdio.h>

int main() {
    int a, b, c, d, e, max;

    a = 10;
    b = 20;
    c = 30;
    d = 69;
    e = 420;

    max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    if (d > max) max = d;
    if (e > max) max = e;

    printf("biggest integer is = %d\n", max);
    return 0; }
    
