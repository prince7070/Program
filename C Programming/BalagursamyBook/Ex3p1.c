#include<stdio.h>

int main()
{
    int x,y,z,temp;
    
    printf("Entre a Value of X: ");
    scanf("%d",&x);

    printf("Entre a Value of Y: ");
    scanf("%d", &y);

    printf("Enter a value of Z: ");
    scanf("%d", &z);

    // value of X assign to temp
    temp=x;

    // value of Y assig to X
    x=y;

    // value of Y assign to Z
    y=z;

    // Value of Z (initial value) assign to temp
    z=temp;

    printf("After swap tha Value of X is %d \n", x);
    printf("After swap the Value of Y is %d \n ",y);
    printf("After swap the Value of Z is %d",z);

    return 0;
    
}

