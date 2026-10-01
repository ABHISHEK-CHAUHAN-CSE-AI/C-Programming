#include <stdio.h>

int main()
{
    float total_budget, expense, total_expenses = 0, remaining_balance;
    int num_items, i;

    printf("=== MY DAILY BUDGET TRACKER ===\n\n");
    
    printf("Enter your total budget for today (in Rs): ");
    scanf("%f", &total_budget);

    printf("Enter total number of items bought today: ");
    scanf("%d", &num_items);

    printf("\n--- Enter Expense Details ---\n");
    for(i = 1; i <= num_items; i++)
    {
        printf("Enter cost for item %d: Rs ", i);
        scanf("%f", &expense);
        total_expenses += expense;
    }

    remaining_balance = total_budget - total_expenses;

    printf("\n====================================");
    printf("\n          BUDGET SUMMARY            ");
    printf("\n====================================");
    printf("\nTotal Daily Budget : Rs %.2f", total_budget);
    printf("\nTotal Money Spent  : Rs %.2f", total_expenses);
    printf("\nRemaining Balance  : Rs %.2f", remaining_balance);
    printf("\n------------------------------------");

    if (remaining_balance > 0)
    {
        printf("\nGreat job! You saved Rs %.2f today.\n", remaining_balance);
    }
    else if (remaining_balance == 0)
    {
        printf("\nYou spent exactly your full budget today.\n");
    }
    else
    {
        printf("\nWarning! You overspent by Rs %.2f today.\n", -remaining_balance);
    }

    return 0;
}
