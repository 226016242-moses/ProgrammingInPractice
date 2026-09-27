#include <stdio.h>

int main()
{ 
    int i;
    float salary;
    float total = 0;
    float average;
    float highest=0; 
    float lowest=0;

    for (i=1; i<=50; i++)
    {
        printf("Enter salary for employee %d: ", i);
        scanf("%f", &salary);
        
        total += salary;
        
        if (i == 1) {
            highest = salary;
            lowest = salary;
        } else {
            if (salary > highest) {
                highest = salary;
            }
            if (salary < lowest) {
                lowest = salary;
            }
        }
    }

    average= total/50;

    printf("\n---salary display---\n");
    printf("average salary: %.2f\n", average);
    printf("highest salary: %.2f\n", highest);
    printf("lowest salary: %.2f\n", lowest);

    return 0;
}