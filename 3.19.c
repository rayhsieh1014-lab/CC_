#include <stdio.h>

int main(void)
{
    double principal, rate, interest;
    int days;

    while (1) {
        printf("Enter loan principal (-1 to end): ");
        if (scanf("%lf", &principal) != 1) {
            return 0;
        }

        if (principal == -1) {
            break;
        }

        printf("Enter interest rate: ");
        if (scanf("%lf", &rate) != 1) {
            return 0;
        }

        printf("Enter term of the loan in days: ");
        if (scanf("%d", &days) != 1) {
            return 0;
        }

        interest = principal * rate * days / 365.0;

        printf("The interest charge is $%.2f\n\n", interest);
    }

    return 0;
}