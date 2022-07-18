#include <stdio.h>

int main()
{
    int year, tot_days, day_number, leap_days=0, i;
    printf("Enter year: ");
    scanf("%d", &year);
    tot_days = (year-1) * 365;
    printf("Total Number of days (before considering leap days) : %d\n", tot_days);
    for (i = 1; i < year; i++)
    {
        if(i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
        {
            leap_days++;
        }
    }
    tot_days += leap_days;
    printf("Total Number of days (after considering leap days) : %d\n", tot_days);
    day_number = tot_days % 7;
    printf("Day number: %d\n", day_number);
    switch (day_number)
    {
    case 0:
        printf("Monday");
        break;
    case 1:
        printf("Tuesday");
        break;
    case 2:
        printf("Wednesday");
        break;
    case 3:
        printf("Thursday");
        break;
    case 4:
        printf("Friday");
        break;
    case 5:
        printf("Saturday");
        break;
    case 6:
        printf("Sunday");
        break;
    }
    return 0;
}