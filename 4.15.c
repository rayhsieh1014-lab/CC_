#include <stdio.h>
#include <math.h>

int main(void)
{
    double principal = 5000.0;
    double rate, amount;
    int rateStep, year;

    for (rateStep = 0; rateStep < 5; rateStep++) {
        rate = (10.0 + rateStep * 0.5) / 100.0;

        printf("Interest rate: %.1f%%\n", rate * 100);
        printf("%4s%20s\n", "Year", "Amount on deposit");

        for (year = 1; year <= 15; year++) {
            amount = principal * pow(1.0 + rate, year);
            printf("%4d%20.2f\n", year, amount);
        }

        printf("\n");
    }

    return 0;
}