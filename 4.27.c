#include <stdio.h>

int main(void)
{
    int side1, side2, hypotenuse;
    int count = 0;

    printf("%8s%8s%12s\n", "Side 1", "Side 2", "Hypotenuse");

    for (side1 = 1; side1 <= 500; side1++) {
        for (side2 = side1; side2 <= 500; side2++) {
            for (hypotenuse = 1; hypotenuse <= 500; hypotenuse++) {
                if (side1 * side1 + side2 * side2
                    == hypotenuse * hypotenuse) {
                    printf("%8d%8d%12d\n",
                           side1, side2, hypotenuse);
                    count++;
                }
            }
        }
    }

    printf("\nTotal: %d\n", count);

    return 0;
}