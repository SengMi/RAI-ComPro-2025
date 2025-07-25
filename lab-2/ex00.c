#include <stdio.h>

int main() {
    float programming = 4.0;
    float drawing = 3.5;
    float mechanics = 3.5;
    float math1 = 3.0;
    float average;

    average = (programming + drawing + mechanics + math1) / 4.0;

    printf("+------------------+--------+\n");
    printf("| Subject          | Grade  |\n");
    printf("+------------------+--------+\n");
    printf("| Programming      | %6.2f |\n", programming);
    printf("| Drawing          | %6.2f |\n", drawing);
    printf("| Mechanics        | %6.2f |\n", mechanics);
    printf("| Math1            | %6.2f |\n", math1);
    printf("+------------------+--------+\n");
    printf("| Average          | %6.2f |\n", average);
    printf("+------------------+--------+\n");

    return 0;
}
