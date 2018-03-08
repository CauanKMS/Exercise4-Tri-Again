#include <stdio.h>

int main() {
    float side1, side2, side3, perimeter;
    char op;

    do {
        printf("Type the 3 triangle side's measures:\n");
        scanf("%f %f %f", &side1, &side2, &side3);

        perimeter = side1 + side2 + side3;

        if (perimeter > 10) {
            printf("Yes");
        } else {
            printf("No");
        }

        printf("\n Wanna leave? Type 'y' if you wanna leave.\n");
        op = getchar();

    }while(op != 'y');
    return 0;
}