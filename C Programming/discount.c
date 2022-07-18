#include <stdio.h>
int main()

{
  int qnt, amt, dis = 0, te;

  // printf("Entre the Quantity purchease:");
  // scanf("%d", &qnt);

  printf("Enter Ammount:");
  scanf("%d", &amt);

  if (amt > 1000)
  {
    printf("Quantity is %d \n", qnt);
    printf("Amount is %d \n", amt);
    dis = amt * 10 / 100;
    printf("Discount ammount is %d\n", dis);
  }
  te = amt - dis;
  printf("total expense is %d", te);

  return 0;
}
