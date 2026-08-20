#include <stdio.h>

int main()
{
    double totalRevenue = 0.0;
    double totalExpenses = 0.0;
    double balance = 0.0;

    printf("MUNICIPAL BUDGET CALCULATOR\n");
    printf("---------------------------\n\n");

    printf("Enter total revenue: ");
    scanf("%lf", &totalRevenue);

    printf("Enter total expenses: ");
    scanf("%lf", &totalExpenses);

    balance = totalRevenue - totalExpenses;

    printf("\n--- Budget Summary ---\n");
    printf("Revenue: %.2f\n", totalRevenue);
    printf("Expenses: %.2f\n", totalExpenses);
    printf("Balance: %.2f\n", balance);

    if (balance > 0)
    {
        printf("Profit: %.2f\n", balance);
    }
    else if (balance < 0)
    {
        printf("Loss: %.2f\n", -balance);
    }
    else
    {
        printf("The budget is balanced.\n");
    }

    return 0;
}
