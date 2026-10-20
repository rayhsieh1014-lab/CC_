#include <stdio.h>

int main(void)
{
    int account;
    double beginningBalance, charges, credits;
    double creditLimit, newBalance;

    while (1) {
        printf("Enter account number (-1 to end): ");
        if (scanf("%d", &account) != 1) {
            return 0;
        }

        if (account == -1) {
            break;
        }

        printf("Enter beginning balance: ");
        if (scanf("%lf", &beginningBalance) != 1) {
            return 0;
        }

        printf("Enter total charges: ");
        if (scanf("%lf", &charges) != 1) {
            return 0;
        }

        printf("Enter total credits: ");
        if (scanf("%lf", &credits) != 1) {
            return 0;
        }

        printf("Enter credit limit: ");
        if (scanf("%lf", &creditLimit) != 1) {
            return 0;
        }

        newBalance = beginningBalance + charges - credits;

        if (newBalance > creditLimit) {
            printf("Account:      %d\n", account);
            printf("Credit limit: %.2f\n", creditLimit);
            printf("Balance:      %.2f\n", newBalance);
            printf("Credit limit exceeded.\n");
        }

        printf("\n");
    }

    return 0;
}