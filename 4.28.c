#include <stdio.h>

int main(void)
{
    int paycode, pieces;
    double salary, hours, hourlyRate, sales, payPerPiece;

    while (1) {
        printf("Enter paycode (1-4, -1 to end): ");
        if (scanf("%d", &paycode) != 1) {
            return 0;
        }

        if (paycode == -1) {
            break;
        }

        switch (paycode) {
            case 1:
                printf("Enter fixed weekly salary: ");
                if (scanf("%lf", &salary) != 1) {
                    return 0;
                }
                break;

            case 2:
                printf("Enter hourly rate: ");
                if (scanf("%lf", &hourlyRate) != 1) {
                    return 0;
                }

                printf("Enter hours worked: ");
                if (scanf("%lf", &hours) != 1) {
                    return 0;
                }

                if (hours <= 40) {
                    salary = hours * hourlyRate;
                } else {
                    salary = 40 * hourlyRate
                           + (hours - 40) * hourlyRate * 1.5;
                }
                break;

            case 3:
                printf("Enter gross weekly sales: ");
                if (scanf("%lf", &sales) != 1) {
                    return 0;
                }

                salary = 250.0 + sales * 0.057;
                break;

            case 4:
                printf("Enter pay per piece: ");
                if (scanf("%lf", &payPerPiece) != 1) {
                    return 0;
                }

                printf("Enter number of pieces produced: ");
                if (scanf("%d", &pieces) != 1) {
                    return 0;
                }

                salary = payPerPiece * pieces;
                break;

            default:
                printf("Invalid paycode. Please enter 1 to 4.\n\n");
                continue;
        }

        printf("Weekly pay is $%.2f\n\n", salary);
    }

    return 0;
}