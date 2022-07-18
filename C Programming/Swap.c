#include<stdio.h>

int main()
{
    int first,second,temp;

    printf("Please entre a first number:");
    scanf("%d", &first);

    printf("Entred a second number:");
    scanf("%d", &second);

    // value of first assign to temp
    temp=first;

    // value of second assign to first
    first=second;

    // value of temp is assigned to second
    second=temp;


    printf(" after swapping, First Number is: %d \n", first);
    printf("aftre swapping, Second Number is: %d", second);

    return 0;
     

}

