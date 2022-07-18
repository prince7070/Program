#include<stdio.h>

int main()
{
    int ram, shyam, ajay;
    printf("Enter the age of Ram: ");
    scanf("%d", &ram);
    printf("Enter the age of Shyam: ");
    scanf("%d", & shyam);
    printf("Enter the age of Ajay: ");
    scanf("%d", &ajay);

    if(ram<shyam && ram<ajay)
    {
        printf("Ram is youngest");
    }
    if(shyam<ram && shyam<ajay)
    {
        printf("Shyam is youngest");
    }
    if(ajay<ram && ajay<shyam)
    {
        printf("Ajay is youngest");

    }
    return 0;
    
}
