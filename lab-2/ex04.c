#include <stdio.h>

int main()
{
    char name[50];
    int studentID;
    float progScore, physicsScore, calculusScore;
    float GPA;

    printf("Enter your Name: ");
    scanf("%s", name);

    printf("Enter your student ID: ");
    scanf("%d", &studentID);

    printf("Enter your Programming score: ");
    scanf("%f", &progScore);

    printf("Enter your Physics score: ");
    scanf("%f", &physicsScore);

    printf("Enter your Calculus score: ");
    scanf("%f", &calculusScore);

    GPA = (progScore + physicsScore + calculusScore) / 3.0;

    printf("Hi %s(%d)! Your GPA is %.2f\n", name, studentID, GPA);

    return 0;
}
