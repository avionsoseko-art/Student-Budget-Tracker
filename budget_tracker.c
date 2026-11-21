
#include <stdio.h>

int main()
{
    float allowance;
    float expenses;
    float balance;

    printf("===== STUDENT BUDGET TRACKER =====\n");

    printf("Enter your monthly allowance: ");
    scanf("%f", &allowance);

    printf("Enter your total expenses: ");
    scanf("%f", &expenses);

    balance = allowance - expenses;

    printf("\n===== BUDGET SUMMARY =====\n");
    printf("Monthly Allowance: KSh %.2f\n", allowance);
    printf("Total Expenses: KSh %.2f\n", expenses);
    printf("Remaining Balance: KSh %.2f\n", balance);

    return 0;
}
