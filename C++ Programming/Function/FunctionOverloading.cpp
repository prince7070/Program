#include <iostream>
using namespace std;
int sum(int a, int b);
int sum(int a, int b, int c);
int main()
{
    cout << "The sum of 10 and 20 is " << sum(10, 20) << endl;
    cout << "The sum of 10, 20 and 30 is " << sum(10, 20, 30);
    return 0;
}

int sum (int a, int b)
{
    return a + b;
}

int sum (int a, int b, int c)
{
    return a + b + c;
}