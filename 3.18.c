#include <stdio.h>

int main(void)
{
    double sales, salary;

    while (1) {
        printf("Enter sales in dollars (-1 to end): ");
        if (scanf("%lf", &sales) != 1) {
            return 0;
        }

        if (sales == -1) {
            break;
        }

        salary = 200.0 + sales * 0.09;

        printf("Salary is: $%.2f\n\n", salary);
    }

    return 0;
}