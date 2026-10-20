#include <stdio.h>

int main(void)
{
    int length, breadth;
    int row, col;

    printf("Enter length: ");
    if (scanf("%d", &length) != 1) {
        return 0;
    }

    printf("Enter breadth: ");
    if (scanf("%d", &breadth) != 1) {
        return 0;
    }

    if (length <= 0 || breadth <= 0) {
        printf("Length and breadth must be positive.\n");
        return 0;
    }

    for (row = 1; row <= length; row++) {
        for (col = 1; col <= breadth; col++) {
            if (row == 1 || row == length ||
                col == 1 || col == breadth) {
                printf("+");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}