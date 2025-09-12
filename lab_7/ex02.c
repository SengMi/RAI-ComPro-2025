#include <stdio.h>

int main() {
    int a = 0;
    int b = 5;
    int *pA = &a;
    int *pB = &b;

    printf("Before reverse: a = %d, b = %d\n", a, b);

    int temp = *pA;
    *pA = *pB;
    *pB = temp;

    printf("After reverse: a = %d, b = %d\n", a, b);
    return 0;
}
