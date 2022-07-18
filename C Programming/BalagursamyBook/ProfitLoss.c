#include <stdio.h>
int main()
{
	int cp, sp;
	printf("Enter cost price: ");
	scanf("%d", &cp);
	printf("Enter selling price: ");
	scanf("%d", &sp);
	if(sp>=cp)
	{
		printf("The seller had a profit of %d.", sp-cp);
	}
	else
	{
		printf("The seller incurred a loss of %d.", cp-sp);
	}
	return 0;
}
