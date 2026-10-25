#include <stdio.h>

int g_account_status;
float g_initial_balance;

void banner(void)
{
    printf("\n============================================================\n");
    printf("\t\tPREPAID MOBILE RECHARGE SYSTEM\n");
    printf("============================================================\n\n");
}

void read_subscriber(void)
{
    printf("Enter Account Status: ");
    scanf("%d", &g_account_status);

    printf("Initial Balance: ");
    scanf("%f", &g_initial_balance);
}

float calculate_bonus(float balance)
{
    float bonus = 20.50;
    return balance + bonus;
}

void print_subscriber(float final_balance)
{
    printf("Subscriber Record:-\n");
    printf("Account Status\t: %d\n", g_account_status);
    printf("Subscriber Name\t: Mushtaq Zaman\n");
    printf("Mobile No.\t: 018855091005\n");
    printf("Plan Code\t: 101\n");
    printf("Initial Balance\t: %.2f BDT\n", g_initial_balance);
    printf("Final Balance\t: %.2f BDT (With Bonus)\n", final_balance);
    printf("Minutes Used\t: 120 mins\n");
    printf("Data Used\t: 1500 MB\n\n");

    printf("System Menu:-\n");
    printf("1. Recharge\n");
    printf("2. Log usage\n");
    printf("3. Check balance\n");
    printf("4. Compare plans\n");
    printf("5. Low-balance list\n");
    printf("6. Save & load\n\n");

    printf("Computations & Rules:-\n");
    printf("Computes\t: Layered tax (Supplementary Duty on amount, then VAT on total)\n");
    printf("Decides\t\t: Call eligibility & cheapest plan comparison\n");
    printf("Recursion\t: Total spend calculation over usage history\n");
    printf("Trap\t\t: Balance validation MUST occur before deduction!\n");
    printf("============================================================\n");
}

int main(void)
{
    banner();
    read_subscriber();
    print_subscriber(calculate_bonus(g_initial_balance));
    return 0;
}
