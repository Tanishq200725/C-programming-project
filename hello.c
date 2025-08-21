#include <stdio.h>

int main() {
    int basicsalary, incentive = 7000, loanRepayment = 14000;
    float hra, da, incomeTax, grossSalary, netSalary;

    printf("Enter basic salary: ");
    scanf("%d", &basicsalary);

    hra = 0.30 * basicsalary;
    da = 0.20 * basicsalary;
    incomeTax = 0.10 * basicsalary;

    grossSalary = basicsalary + hra + da + incentive;
    netSalary = grossSalary - (loanRepayment + incomeTax);

    printf("%f\n", grossSalary);
    printf("%f\n", netSalary);

    return 0;
}

