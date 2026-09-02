#include <stdio.h>

int main() {
    // Core 
    double revenue;
    double expenses;
    double balance;

    // Extension Exercise
    int departments;
    double payroll;
    double procurement;
    double assets;

    printf("MUNICIPAL BUDGET CALCULATOR\n");
    printf("---------------------------\n");

    printf("Enter total revenue: N$");
    scanf("%lf", &revenue);

    printf("Enter total expenses: N$");
    scanf("%lf", &expenses);

    balance = revenue - expenses;

    printf("\nRevenue: N$%.2f\n", revenue);
    printf("Expenses: N$%.2f\n", expenses);
    printf("Balance: N$%.2f\n", balance);

    // Extension Exercise
    printf("\nMUNICIPAL FINANCIAL SUMMARY\n");
    printf("----------------------------\n");

    printf("Enter number of departments: ");
    scanf("%d", &departments);

    printf("Enter total payroll: N$");
    scanf("%lf", &payroll);

    printf("Enter total procurement costs: N$");
    scanf("%lf", &procurement);

    printf("Enter total municipal assets: N$");
    scanf("%lf", &assets);


    printf("\n----------------------------------------\n");
    printf("FINANCIAL SUMMARY REPORT\n");
    printf("----------------------------------------\n");
    printf("\nDepartments: %d\n", departments);
    printf("Payroll: N$%.2f\n", payroll);
    printf("Procurement: N$%.2f\n", procurement);
    printf("Assets: N$%.2f\n", assets);
    printf("----------------------------------------\n");
    printf("Revenue: N$%.2f\n", revenue);
    printf("Expenses: N$%.2f\n", expenses);
    printf("Balance: N$%.2f\n", balance);
    printf("----------------------------------------\n");

    return 0;
}