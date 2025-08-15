#include <stdio.h>
#include <string.h>

int main() {
int type;char element[20];
int atoms;
    char state[10];

    for (type = 1; type <= 5; type++) {
        if (type == 1) {
            strcpy(element, "Carbon");
            atoms = 5;
            strcpy(state, "gas");
        } else if (type == 2) {
            strcpy(element, "Carbon");
            atoms = 6;
            strcpy(state, "liquid");
        } else if (type == 3) {
            strcpy(element, "Nitrogen");
            atoms = 6;
            strcpy(state, "gas");
        } else if (type == 4) {
            strcpy(element, "Nitrogen");
            atoms = 4;
            strcpy(state, "solid");
        } else if (type == 5) {
            strcpy(element, "Hydrogen");
            atoms = 1;
            strcpy(state, "gas");
        }

        printf("Type %d: %s, %d atoms, %s\n", type, element, atoms, state);
    }

    return 0;
}
