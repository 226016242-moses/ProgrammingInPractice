#include <stdio.h>
#include <string.h>

int main()
{
    char municipalityName[50];
    char mayorName[50];
    int population;

    printf("Municipal Financial Management System\n");
    printf("Welcome to Windhoek Municipality\n\n");

    printf("Enter Municipality Name: ");
    ("%49s", municipalityName);

    printf("Enter Mayor's Name: ");
    scanf("%49s", mayorName);

    printf("Enter Population: ");
    scanf("%d", &population);

    printf("\n---scanf Municipality Information ---\n");
    printf("Municipality Name: %s\n", municipalityName);
    printf("Mayor's Name: %s\n", mayorName);
    printf("Population: %d\n", population);

    return 0;
}