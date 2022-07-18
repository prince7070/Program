#include<stdio.h>

int main()

{
int intType;
char charType;
float FloatType;
double DoubleType;

// Sizeof evaluates the size of a variable..

printf("Size of Int: %d bytes\n", sizeof(intType));
printf("Size of char: %zu bytes\n", sizeof(charType));
printf("size of Float: %zu bytes\n", sizeof(FloatType));
printf("Size of Doble: %zu bytes\n",sizeof(DoubleType));

return 0;
}
