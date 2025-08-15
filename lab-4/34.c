#include <stdio.h>

int main() {
    int i;

    i = 0;
    printf("Test 3.1:\n");
    for (i = 0; i > 0; i++) {
        printf("%d\n", i);
    }
    printf("3.1 ended.\n\n");

    i = 0;
    printf("Test 3.2:\n");
    for (i = 0; i % 2 != 0; i += 2) {
        puts("a");
    }
    printf("3.2 ended.\n\n");

    i = 0;
    printf("Test 3.3:\n");
    while (i < 7) {
        printf("%d\n", i--);
        if (i < -10) break; 
    }
    printf("3.3 stopped after safety break.\n\n");

    i = 0;
    printf("Test 3.4:\n");
    int count = 0;
    do {
        i += 3;
        printf("%d\n", i);
        count++;
        if (count > 10) break;
    } while (i % 3 == 0);
    printf("3.4 stopped after safety break.\n");

    return 0;
}
