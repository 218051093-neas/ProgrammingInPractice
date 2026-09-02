#include <stdio.h>

int main() {

    /// LAB 1: EMPLOYEE SALARY CALCULATOR ///

    // Declaring Variables
     float basicSalary;
    float housing;
    float transport;
    float tax;
    float grossSalary;
    float netSalary;


    /// Prompt for employee basic salary
    printf("Enter basic salary: ");
    scanf("%f", &basicSalary);

    // Prompt for housing allowance
    printf("Enter housing allowance: ");
    scanf("%f", &housing);

    // Prompt for transport allowance
    printf("Enter transport allowance: ");
    scanf("%f", &transport);

    // Prompt for employee tax
    printf("Enter tax: ");
    scanf("%f", &tax);

    // Calculate for the gross salary
    grossSalary = basicSalary + housing + transport;

    // Calculate for the net salary
    netSalary = grossSalary - tax;

    // Print the Employee Gross Salary
    printf("\nGross Salary: %.2f\n", grossSalary);

    // Print the Employee Net Salary
    printf("Net Salary: %.2f\n", netSalary);


    /// LAB 2: TENDER EVALUATION ///

    // Variable Declaration
    char supplierName[50];
    float price;
    float budget;
    int registered;
    int documentsComplete;

    // Prompt for Supplier Name
    printf("Enter supplier name: ");
    scanf("%49s", supplierName);

    // Prompt for Tender Price
    printf("Enter tender price: ");
    scanf("%f", &price);

    //Prompt for Available Budget
    printf("Enter available budget: ");
    scanf("%f", &budget);

    // Verification of vendor is registered?
    printf("Is supplier registered? (1=Yes, 0=No): ");
    scanf("%d", &registered);

    // Verification if all documents are complete?
    printf("Are all documents complete? (1=Yes, 0=No): ");
    scanf("%d", &documentsComplete);
    if (registered == 0 || documentsComplete == 0)
    {
    printf("\nSupplier: %s\n", supplierName);
    printf("Status: Disqualified\n");
    }
    else if (price > budget)
    {
    printf("\nSupplier: %s\n", supplierName);
    printf("Status: Disqualified\n");
    }
    else
    {
    printf("\nSupplier: %s\n", supplierName);
    printf("Status: Qualified\n");
    }

    return 0;
}