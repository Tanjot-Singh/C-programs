/*WAP to calculate the gross salary of an employee on the bases of following conditions:
     Basic Salary(BS)                    DA                     HRA
     BS >= 2000                         10%                     15%
     BS >= 2000 and BS>=5000            15%                     20%
     BS >= 5000 and BS>=8000            25%                     30%
     BS >= 8000 and BS>=10000           30%                     35%
     BS >=10000                         40%                     45%
*/


#include <stdio.h>

int main() {
    // Declare variables
    float basicSalary, DA, HRA, grossSalary;

    // Get the basic salary from the user
    printf("Enter the basic salary: ");
    scanf("%f", &basicSalary);

    // Determine DA and HRA based on the basic salary
    if (basicSalary >= 10000) {
        DA = basicSalary * 0.40;  // 40% of BS
        HRA = basicSalary * 0.45; // 45% of BS
    } else if (basicSalary >= 8000) {
        DA = basicSalary * 0.30;  // 30% of BS
        HRA = basicSalary * 0.35; // 35% of BS
    } else if (basicSalary >= 5000) {
        DA = basicSalary * 0.25;  // 25% of BS
        HRA = basicSalary * 0.30; // 30% of BS
    } else if (basicSalary >= 2000) {
        DA = basicSalary * 0.15;  // 15% of BS
        HRA = basicSalary * 0.20; // 20% of BS
    } else {
        DA = basicSalary * 0.10;  // 10% of BS
        HRA = basicSalary * 0.15; // 15% of BS
    }

    // Calculate gross salary
    grossSalary = basicSalary + DA + HRA;

    // Display the results
    printf("Basic Salary: %.2f\n", basicSalary);
    printf("Dearness Allowance (DA): %.2f\n", DA);
    printf("House Rent Allowance (HRA): %.2f\n", HRA);
    printf("Gross Salary: %.2f\n", grossSalary);

    return 0;
}

