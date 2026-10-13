#include <stdio.h>
int main()
{
  double Revenue;
  double Expenses;
  double Balance;

  printf("Municipal Budget Calculator\n");
  printf("\n-------------------------\n");

  printf("Enter total Revenue:\n");
  scanf("%lf", &Revenue);
  printf("Enter total Expenses:\n");
  scanf("%lf", &Expenses);
  Balance=Revenue-Expenses;

  printf("\n-------------------------\n");
  printf("Revenue: %.2f\n", Revenue);
  printf("Expenses: %.2f\n", Expenses);
  printf("Balance: %.2f\n", Balance);

  return 0;

}