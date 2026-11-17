#include <stdio.h>

int account_status;
double initial_balance;

void banner(void){
    printf("============================================================\n");
    printf("\t\tPREPAID MOBILE RECHARGE SYSTEM\n");
    printf("============================================================\n\n");
}

void read_subscriber(void){
    printf("Enter Account Status: ");
    scanf("%d", &account_status);

    printf("Initial Balance: ");
    scanf("%lf", &initial_balance);
}

double calculate_bonus(double balance){
    double bonus = 20.50;
    return balance + bonus;
}

void print_subscriber(double final_balance){
    printf("Subscriber Record:-\n");
    printf("Account Status\t: %d\n", account_status);
    printf("Subscriber Name\t: Mushtaq Zaman\n");
    printf("Mobile No.\t: 018855091005\n");
    printf("Plan Code\t: 101\n");
    printf("Initial Balance\t: %.2f BDT\n", initial_balance);
    printf("Final Balance\t: %.2f BDT (With Bonus)\n", final_balance);
    printf("Minutes Used\t: 120 mins\n");
    printf("Data Used\t: 1500 MB\n");
}

int main(void){
    int choice;
    double current_balance, recharge_amount;

    banner();
    read_subscriber();
    current_balance = calculate_bonus(initial_balance);
    print_subscriber(current_balance);

    do {
    printf("\n========== SYSTEM MENU ==========\n");
    printf("1. Recharge\n");
    printf("2. Log usage\n");
    printf("3. Check balance\n");
    printf("4. Compare plans\n");
    printf("5. Low-balance list\n");
    printf("6. Save & load\n");
    printf("7. Exit\n");
    printf("\nEnter your choice(1-7): ");
    scanf("%d", &choice);

    switch (choice) {

    case 1:
        printf("Enter Recharge Amount: ");
        scanf("%lf", &recharge_amount);

        if (recharge_amount > 0) {
        current_balance += recharge_amount;
        printf("Recharge successful!\n");
        printf("New balance: %.2f BDT.\n", current_balance);
        }
        else {
        printf("Invalid recharge amount.\n");
        }
        break;

    case 2: printf("This month usage: 200 BDT,100 Minutes,4GBs\n");
        break;

    case 3: printf("Current Balance: %.2f BDT\n", current_balance);
        break;
    case 4: printf("3GB-100Tk 3days/10GB-400Tk 10days/100 Minute-120Tk 7 days\n");
        break;
    case 5: printf("You have enough balance now!\n");
        break;
    case 6: printf("Saved package no.1 and loaded balance!\n");
        break;
    case 7: printf("Thank you for using our system.Goodbye!\n");
        break;
    default:
        printf("Invalid choice! Please choose 1 to 7.\n");
        }
    } while(choice != 7);

    return 0;
}
