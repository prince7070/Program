#include <stdio.h>
int sum(int a, int b);
int sum(int a, int b, int c);
int main()
{
    printf("The sum of 10 and 20 is %d.\n", sum(10, 20));
    printf("The sum of 10, 20 and 30 is %d.\n", sum(10, 20, 30));
    return 0;
}

int sum(int a, int b)
{
    return a + b;
}

int sum(int a, int b, int c)
{
    return a + b + c;
}