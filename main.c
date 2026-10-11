#include <stdio.h>

int main() {

    char number[11];

    printf("Enter your mobile no> ");
    scanf("%s", &number);


    printf("============================================================\n");
    printf("\t\tPREPAID MOBILE RECHARGE SYSTEM\n");
    printf("============================================================\n\n");



    printf("Subscriber Record:-\n");
    printf("%-18s: %s\n", "Mobile No.",  number);
    printf("%-18s: %s\n", "Subscriber Name", "Mushtaq Zaman");
    printf("%-18s: %d\n", "Plan Code", 101);
    printf("%-18s: %.2f BDT\n", "Balance", 250.50);
    printf("%-18s: %d mins\n", "Minutes Used", 120);
    printf("%-18s: %d MB\n\n", "Data Used", 1500);


    printf("System Menu:-\n");
    printf("1. Recharge\n");
    printf("2. Log usage\n");
    printf("3. Check balance\n");
    printf("4. Compare plans\n");
    printf("5. Low-balance list\n");
    printf("6. Save & load\n\n");


    printf("Computations & Rules:-\n");
    printf("Computes\t:\tLayered tax (Supplimentary Duty on amount,then VAT on total)\n");
    printf("Decides\t\t:\tCall eligibility & cheapest plan comparison\n");
    printf("Recursion\t:\tTotal spend calculation over usage history\n");
    printf("Trap\t\t:\tBalance validation MUST occur before deduction!\n");
    printf("============================================================\n");

    return 0;
}
