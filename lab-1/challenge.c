#include <stdio.h>

int main() {
    printf("+----------------+--------+--------+\n");
    printf("| %-16s | %6s | %6s |\n", "Name", "Score1", "Score2");
    printf("+----------------+--------+--------+\n");
    printf("| %-16s | %6d | %6d |\n", "Alice", 85, 90);
    printf("| %-16s | %6d | %6d |\n", "Bob", 78, 82);
    printf("| %-16s | %6d | %6d |\n", "Charlie", 92, 88);
    printf("+----------------+--------+--------+\n");
    return 0;
}
#include <stdio.h>

int main() {
    float programming, drawing, mechanics, math1, average;

    printf("Enter Programming grade: ");
    scanf("%f", &programming);

    printf("Enter Drawing grade: ");
    scanf("%f", &drawing);

    printf("Enter Mechanics grade: ");
    scanf("%f", &mechanics);

    printf("Enter Math1 grade: ");
    scanf("%f", &math1);

    average = (programming + drawing + mechanics + math1) / 4.0;

    printf("\nGrades:\n");
    printf("Programming : %.2f\n", programming);
    printf("Drawing     : %.2f\n", drawing);
    printf("Mechanics   : %.2f\n", mechanics);
    printf("Math1       : %.2f\n", math1);
    printf("Average     : %.2f\n", average);

    return 0;
}
