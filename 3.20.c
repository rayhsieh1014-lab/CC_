#include <stdio.h>

int main(void)
{
    double hours, hourlyRate, salary;

    while (1) {
        printf("Enter # of hours worked (-1 to end): ");
        if (scanf("%lf", &hours) != 1) {
            return 0;
        }

        if (hours == -1) {
            break;
        }

        printf("Enter hourly rate of the worker ($00.00): ");
        if (scanf("%lf", &hourlyRate) != 1) {
            return 0;
        }

        if (hours <= 40) {
            salary = hours * hourlyRate;
        } else {
            salary = 40 * hourlyRate
                   + (hours - 40) * hourlyRate * 1.5;
        }

        printf("Salary is $%.2f\n\n", salary);
    }

    return 0;
}