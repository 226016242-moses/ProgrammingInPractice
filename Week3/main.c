#include<stdio.h>

int main()
{
    float basicSalary;
    float housing;
    float transport;
    float tax;
    float taxRate=0.6;
    float netSalary;
    float grossSalary;

printf("enter basicSalary: ");
scanf("%f", &basicSalary);

printf("enter housing allowances: ");
scanf("%f", &housing);

printf("enter transport allowance: ");
scanf("%f", &transport);

grossSalary = basicSalary + housing + transport;
tax = grossSalary * taxRate;
netSalary = grossSalary - tax;

printf("Gross Salary: %.2f\n", grossSalary);
printf("Tax: %.2f\n", tax);
printf("Net Salary: %.2f\n", netSalary);

return 0;
}





