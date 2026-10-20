#include <stdio.h>
#include "functions.h"

void employeeManagementMenu(void);
void budgetManagementMenu(void);
void supplierManagementMenu(void);
void assetManagementMenu(void);
void displayReportsMenu(void);

int main(void) {
    int choice = 0;

    do{
        displayMenu();
        choice = getValidInt("");

        switch(choice){
            case 1:
            employeeManagementMenu();
            break;
            case 2:
            budgetManagementMenu();
            break;
            case 3:
            supplierManagementMenu();
            break;
            case 4:
            assetManagementMenu();
            break;
            case 5:
            displayReportsMenu();
            break;
            case 6:
            printf("\n Exiting.\n");
            break;
            default:
            printf("\n Invalid choice. Please enter a number between 1 and 6 .\n"); 
        }
    } while (choice != 6);
     return 0;
}
