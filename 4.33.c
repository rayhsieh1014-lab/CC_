#include <stdio.h>

int main(void)
{
    int row, col, spaces, stars;

    for (row = 1; row <= 9; row++) {
        if (row <= 5) {
            spaces = 5 - row;
            stars = 2 * row - 1;
        } else {
            spaces = row - 5;
            stars = 2 * (10 - row) - 1;
        }

        for (col = 1; col <= spaces; col++) {
            printf(" ");
        }

        for (col = 1; col <= stars; col++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}