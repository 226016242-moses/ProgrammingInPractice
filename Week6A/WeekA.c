#include <stdio.h>

int main(){
    float salaries[50];
    float average;
    float highest=0;
    float lowest=0;
    int i;
    float total=0;

    // declare variables
// 1.ask the user for 50 salaries
printf("Enter 50 salaries:\n");
for(i=0;i<50;i++){
    printf("Salary %f: ", i+1);
    scanf("%f", &salaries[i]);
}
//2.display all salaries
printf("All salaries:\n");
for(i=0;i<50;i++){
    printf("%f ", salaries[i]);
}
//3.calculate the average salary
for(i=0;i<50;i++){
    total += salaries[i];
}
average = total / 50;
printf("salary total: %f\n", total);
printf("average salary: %f\n", average);

//4.find the highest salary
highest = salaries[0];
for(i=1;i<50;i++){
    if(salaries[i] > highest){
        highest = salaries[i];
    }
}
//5.find the lowest salary
lowest = salaries[0];
for(i=1;i<50;i++){
    if(salaries[i] < lowest){
        lowest = salaries[i];
    }
}
//6.search for a specific salary
printf("Enter a salary to search for: ");
float search_salary;
scanf("%f", &search_salary);
int found = 0;
for(i=0;i<50;i++){
    if(salaries[i] == search_salary){
        printf("Salary %f found at position %d\n", search_salary, i+1);
        found = 1;
        break;
    }
}
if(!found){
    printf("Salary %f not found\n", search_salary);
}

return 0;
}