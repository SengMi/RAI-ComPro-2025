#include <stdio.h>

int main() {
    char name[50];
    float calc, phys, prog, avg;
    char grade;

    printf("Enter your name: ");
    scanf("%s", name); 

    printf("Enter your Calculus score: ");
    scanf("%f", &calc);

    printf("Enter your Physic score: ");
    scanf("%f", &phys);

    printf("Enter your Science score: ");
    scanf("%f", &prog);

    avg = (calc + phys + prog) / 3;

    if (avg >= 80)
        grade = 'A';
    else if (avg >= 70)
        grade = 'B';
    else if (avg >= 60)
        grade = 'C';
    else if (avg >= 50)
        grade = 'D';
    else
        grade = 'F';

    printf("%s, your average is %.2f. You got grade %c.\n", name, avg, grade);

    return 0;
}
