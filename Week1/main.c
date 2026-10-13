#include <stdio.h>
int main()
{ 
    char municipality[50];
    char mayor[50];
    int population;
    printf("Municipal Financial Management System\n");
    printf("Welcome to the Municipal Financial Management System!\n");
    printf("\n-------------------------------------------\n");

    printf("Enter municipality name:");
    scanf("%s", municipality);
    printf("Enter mayor name:");
    scanf("%s", mayor);
    printf("Enter population:");
    scanf("%d", &population);
    printf("\n------------------------\n");
    printf("municipality: %s\n", municipality);
    printf("mayor: %s\n", mayor);
    printf("population: %d", population);
return 0;
}