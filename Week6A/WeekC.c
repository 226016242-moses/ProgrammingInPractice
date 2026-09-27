#include<stdio.h>
int main(){
    char registrations[20][20];
    int i;

//Capture 20 registration numbers
printf("Enter 20 registration numbers:\n");
    for(int i=0;i<20;i++){
        printf("Registration %d: ", i+1);
        scanf("%s", registrations[i]);
    }
//Display all registration numbers
printf("All registration numbers:\n");
    for(int i=0;i<20;i++){
        printf("Registration %d: %s\n", i+1, registrations[i]);
    }
//Search for a particular registration number
printf("Enter a registration number to search for: ");
    char search_registration[20];
    scanf("%s", search_registration);
    int found = 0;
    for(int i=0;i<20;i++){
        if(strcmp(registrations[i], search_registration) == 0){
            printf("Registration number %s found at position %d\n", search_registration, i+1);
            found = 1;
            break;
        }
    }
    if(!found){
        printf("Registration number %s not found\n", search_registration);
    }
   return 0;
}
