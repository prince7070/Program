#include<stdio.h>
int main()

{
    char ch;

    printf("Input a chreacter");
    scanf("%c", &ch);


    (ch >= 97  && ch<= 122) ? printf("Character entred a lower case."):  printf("Character is not a lower case.");

}