#include<stdio.h>

int main()
{
    float basicSalary;
    float housing;
    float transport;
    float tax;
    float netSalary;
    float grossSalary;

printf("enter basicSalary: ");
scanf("%f", &basicSalary);

printf("enter housing allowances: ");
scanf("%f", &housing);

printf("enter transport allowance: ");
scanf("%f", &transport);

printf("enter tax: ");
scanf("%f", &tax);

grossSalary = basicSalary + housing + transport;
netSalary = grossSalary - tax;

printf("Gross Salary: %.2f\n", grossSalary);
printf("Net Salary: %.2f\n", netSalary);

return 0;
}





