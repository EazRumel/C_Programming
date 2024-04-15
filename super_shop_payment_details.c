#include <stdio.h>
int main()
{
  double price, amountPaid, amountReturn;
  char product[100], customerName[100];
  int phoneNumber;

  printf("Enter the Customer Name: ");
  scanf("%s", customerName);

  printf("Enter the Product Name: ");
  scanf("%s", product);

  printf("Enter the customer phone number: ");
  scanf("%d", &phoneNumber);

  printf("Enter the product amount:\n ");
  scanf("%lf", &price);
  if (price > 1000)
    printf("High product value\n");
  else if (price < 1000)
    printf("Average product value\n");
  else if (price < 500)
    printf("Low product value\n");

  printf("Enter the payment amount:\n ");
  scanf("%lf", &amountPaid);

  amountReturn = (amountPaid - price);
  printf("Your amount returned is:%lf", amountReturn);
}
