#include <stdio.h>
int main()
{
    char gender;
    int health_condition, age, lives_in;
    printf("Enter health condition(1 for excellent and 2 for poor): ");
    scanf("%d", &health_condition);
    printf("Enter age: ");
    scanf("%d%*c", &age);
    printf("Enter gender (M/F): ");
    scanf("%c", &gender);
    printf("Lives in (1 for city and 2 for village: ");
    scanf("%d", &lives_in);

    if (health_condition == 1 && age >= 25 && age <= 35 && lives_in == 1 && gender == 'M')
    {
        printf("The person can be insured.\n");
        printf("The premium is Rs. 4 per thousand.\n");
        printf("Insured amount cannot exceed Rs. 2,00,000.00");
    }
    else if (health_condition == 1 &&age >= 25 &&age <= 35 &&lives_in == 1 &&gender == 'F')
    {
        printf("The person can be insured.\n");
        printf("The premium is Rs. 3 per thousand.\n");
        printf("Insured amount cannot exceed Rs. 1,00,000.00");
    }
    else if (health_condition == 2 &&age >= 25 &&age <= 35 &&lives_in == 2 &&gender == 'M')
    {
        printf("The person can be insured.\n");
        printf("The premium is Rs. 6 per thousand.\n");
        printf("Insured amount cannot exceed Rs. 10,000.00");
    }
    else
    {
        printf("The person cannot be insured.");
    }
    return 0;
}