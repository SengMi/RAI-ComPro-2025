#include <stdio.h>

int main()
{
    char fullName[100];
    int age;
    float height;
    char university[100];

    printf("Enter your full name: ");
    scanf(" %[^\n]", fullName);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your heght: ");
    scanf("%f", &height);

    printf("Enter you University name: ");
    scanf(" %[^\n]", university);

    printf("\nHi! Everyone. This is K.%s from %s. I am %d years old and my height is\n%.1f cm tall.\n",
           fullName, university, age, height);

    return 0;
}
