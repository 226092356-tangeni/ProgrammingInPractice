#ifndef Functions_H
#define Functions_H

float calculateVAT(float amount, float rate);
float calculateSalary(float basic, float housing, float transport);
float calculateBudget(float revenue, float expenditure);

int searchEmployee(int id, int ids[], int size);

void displayMenu(void);
int getValidInt(const char *prompt);
float getValidFloat(const char *prompt);
void getValidString(const char *prompt, char *buffer, int size);
void clearInputBuffer(void);

#endif