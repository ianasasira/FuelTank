#include <stdio.h>

int main()
{

    // int january, february, march, april, may, june, july, august, september, october, november, december;

    // rows * columns

    int monthly_expenses[4][12];

    // Nested for loop to enter the annual expenses
    // i in this case represents the month in the multi dimensional array that is the columns

    for (int i = 0; i <= 12; i++)
    {
        // j in this case represents the week for a month i
        for (int j = 0; j <= 4; j++)
        {

            printf("Please enter the value for week %d for month %d  \t", j + 1, i + 1);
            scanf("d", &monthly_expenses[j][i]);
            printf("%d \n ", monthly_expenses[j][i]);
        }
    }

    // Nested for loop to display the results
    for (int i = 0; i <= 12; i++)
    {
        // j in this case represents the week for a month i
        for (int j = 0; j <= 4; j++)
        {
            printf("Thesea are the monthly expenses:/n");
            scanf("%d", monthly_expenses[j][i]);
        }
        printf("/n");
    }
    return 0;
}
