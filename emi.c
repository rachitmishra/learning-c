#include <math.h>
#include <stdio.h>

main() {
  int inum;
  float loan, irate, emi, balance, mir, mia;
  printf("\aPlease Enter Your Loan Amount : ");
  scanf("%f", &loan);
  printf("Please Enter Interest Rate : ");
  scanf("%f", &irate);
  printf("Please Number Of Months: ");
  scanf("%d", &inum);

  mir = irate / 12 / 100;
  // printf("\ntest: %.2f%.2f%.2f%d",mir,loan,irate,inum);
  emi = (loan * mir) * pow(1 + mir, inum) / (pow(1 + mir, inum) - 1);
  printf("\nYour Easy Monthly Installment Is: %.2f", emi);
  mia = loan - (loan * mir * inum) / 100;

  balance = loan + mia - emi;
  printf("\nYour remaining Loan is For Next Month is: %d", balance);
}
