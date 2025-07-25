#include <stdio.h>

int main()
{
    int intVal;
    float floatVal;
    char charVal;

    printf("Please enter an integer value: ");
    scanf("%d", &intVal);
    printf("You entered %d\n", intVal);

    printf("Please enter a float value: ");
    scanf("%f", &floatVal);
    printf("You entered %.1f\n", floatVal); 

    printf("Please enter a character: ");
    scanf(" %c", &charVal); 
    printf("You entered %c\n", charVal);

    return 0;
}
