#include<stdio.h>
int main(){
     float budgets[10];
    float totalBudget=0;
    float averageBudget=0;
    int i;
    int m;
    

     //Capture 10 department budgets
     printf("Enter 10 department budgets:\n");
        for(int i=0;i<10;i++){
            printf("Budget %d: ", i+1);
            scanf("%f", &budgets[i]);
        }
     //Display the budgets
     printf("Department Budgets:\n");
        for(int i=0;i<10;i++){
            printf("Budget %d: %.2f\n", i+1, budgets[i]);
        }
     //Calculate the total budget
        for(int i=0;i<10;i++){
                totalBudget += budgets[i];
            }
     //Calculate the average budget
     averageBudget = totalBudget / 10;
     //Sort budgets from lowest to highest
    for(int i=0;i<10;i++){
            for(int m=i+1;m<10;m++){
                if(budgets[i] > budgets[m]){
                    float temp = budgets[i];
                    budgets[i] = budgets[m];
                    budgets[m] = temp;
                }
            }
        }
     
    
    return 0;
}