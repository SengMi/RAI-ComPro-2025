#include <stdio.h>

char getGrade(int score) {
    if (score >= 80)
        return 'A';
    else if (score >= 70)
        return 'B';
    else if (score >= 60)
        return 'C';
    else if (score >= 50)
        return 'D';
    else
        return 'F';
}

float getNumericGrade(char grade) {
    switch (grade) {
        case 'A': return 4.0;
        case 'B': return 3.0;
        case 'C': return 2.0;
        case 'D': return 1.0;
        default: return 0.0;
    }
}

int main() {
    int cal, phy, com;
    char gCal, gPhy, gCom;
    float nCal, nPhy, nCom, GPA;

    printf("Calculus score: ");
    scanf("%d", &cal);
    printf("Physic score: ");
    scanf("%d", &phy);
    printf("compro score: ");
    scanf("%d", &com);

    gCal = getGrade(cal);
    gPhy = getGrade(phy);
    gCom = getGrade(com);

    nCal = getNumericGrade(gCal);
    nPhy = getNumericGrade(gPhy);
    nCom = getNumericGrade(gCom);

    GPA = (nCal + nPhy + nCom) / 3;

    printf("\nSubject     Score     Grade     Grade\n");
    printf("--------------------------------------\n");

    printf("Cal         %-9d%-10c%.1f\n", cal, gCal, nCal);
    printf("Physics     %-9d%-10c%.1f\n", phy, gPhy, nPhy);
    printf("compro      %-9d%-10c%.1f\n", com, gCom, nCom);

    printf("\nGPA: %.1f\n", GPA);

    return 0;
}
