#include <stdio.h>

int main(void)
{
    int totalVotes;
    int republicans;
    int democrats;
    int votesDifference;

    printf("Welcome to the government election\n");

    printf("Enter the total number of votes for republicans: ");
    scanf("%d", &republicans);

    printf("Enter the total number of votes for democrats: ");
    scanf("%d", &democrats);

    totalVotes = republicans + democrats;
    votesDifference = republicans - democrats;

    if (republicans > democrats)
    {
        printf("Republicans win\n");
    }
    else
    {
        printf("Democrats win\n");
        votesDifference = democrats - republicans;
    }

    printf("The difference in votes is: %d\n", votesDifference);
    printf("The total number of votes is: %d\n", totalVotes);

    return 0;
}