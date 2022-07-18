#include<stdio.h>

int main()

{
    int bs=1500,br=200,cs,commission,gs,price;

    printf(" How many computer sold:-");
    scanf("%d",&cs);

    printf("Entre a sales Ammount:-");
    scanf("%d", &price);


    int bonus=br*cs;

 	printf("--------------------------------------------------------------------------- \n ");
 	
 	printf("Basic Salary is %d \n", bs);
    printf("bonus is %d \n",bonus);

    commission= price*2/100;

    printf(" The total commission is %d \n", commission);
    
    gs=bonus+commission+bs;
    
    printf("The Gross Salary is:- %d ",gs);
}
