#include <stdio.h>

int main() {
    char firstName[] = "Nang";       
    char lastName[] = "Mi";         
    int age = 20;                    
    float height = 172.5;            

    printf("My name is %s %s\n", firstName, lastName);
    printf("I am %d years old.\n", age);
    printf("I am %.1f cm tall\n", height);

    return 0;
}
