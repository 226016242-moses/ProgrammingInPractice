#include <stdio.h>
#include <stdbool.h>

int main()
{
    char supplierName[70];
    float price;
    int budget;
    int registeredInput;
    int documentsCompleteInput;
    bool registered;
    bool documentsComplete;

    printf("Enter supplier name: ");
    scanf("%69s", supplierName);

    printf("Enter price: ");
    scanf("%f", &price);

    printf("Enter budget: ");
    scanf("%d", &budget);

    printf("Is the supplier registered? (1 for Yes, 0 for No): ");
    scanf("%d", &registeredInput);

    printf("Are the documents complete? (1 for Yes, 0 for No): ");
    scanf("%d", &documentsCompleteInput);

    if (registeredInput == 0 || documentsCompleteInput == 0) {
        printf("%s\n", supplierName);
    } else if (price > budget) {
        printf("\nSupplier: %s\n", supplierName);
        printf("Status: Disqualified\n");
    } else {
        printf("\nSupplier: %s\n", supplierName);
        printf("Status: Qualified\n");
    }

    return 0;
}