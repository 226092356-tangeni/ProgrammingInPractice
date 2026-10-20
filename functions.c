#include <stdio.h>
#include <string.h>
#include "functions.h"

float CalculateVAT(float amount, float rate){
    return amount * rate;
}

float calculateSalary(float basic, float housing, float transport){
    return basic+housing+transport;
}
float calculateBudget(float revenue, float expenditure){
    return revenue-expenditure;
}

int searchEmployee(int id, int ids[], int size) {
    for(int i = 0; i<size; i++){
        if (ids[i]==id){
            return i;
        }

    }
    return -1;
}
void displayMenu(void){
    printf("\n--------------------------------------------------------\n");
    printf("Municipal Financial Management System\n");
    printf("----------------------------------------------------------\n");
    printf("1. Employee Management\n");
    printf("2. Budget Management\n");
    printf("3.Supplier Management\n");
    printf("4.Asset Management\n");
    printf("5.Reports\n");
    printf("6.Exit\n");
    printf("------------------------------------------------------------\n");
}

void clearInputBuffer(void) {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}
int getValidInt(const char *prompt){
    int value;
    printf("%s", prompt);
    while (scanf("%d", &value) != 1) {
        printf("[!] Invalid input.please enter a number:");
        clearInputBuffer();
    }
    clearInputBuffer();
    return value;
}

float getValidFloat(const char *prompt){
    float value;
    printf("%s", prompt);

    while(scanf("%f", &value) !=1 || value<0){
        if (value<0){
            printf("[!] Error. Value cannot be negative:");
        } else {
            printf("[!] Invalid input. Please enter a valid amount:");
        }
        clearInputBuffer();
    } 
    clearInputBuffer();
    return value;
}

void getValidString(const char *prompt, char *buffer, int size){
    while(1){
        printf("%s", prompt);
        if(fgets(buffer, size, stdin) != NULL){
            buffer[strcspn(buffer, "\n")]='\0';
            if(strlen(buffer)==0){
                printf("[!] Error: name cannot be empty.Try again.\n");
            } else {
                break;
            }
        }
    }
}