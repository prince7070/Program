#include<stdio.h>

int main()
{
     int dividend, divisor,quotient,remainder;

     {
        printf("Please entre a dividend:");
        scanf("%d",&dividend);

        printf("Please entre a divisor:");
        scanf("%d",&divisor);

        // compute quotient

        quotient= dividend / divisor;

        printf("The Quotient is: %d\n", quotient);

        // compute remaindre

        remainder = dividend % divisor;

        printf("The reaminder is: %d", remainder);

     }
     return 0;
}
