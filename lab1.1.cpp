#include <stdio.h>
#include <string.h>

const int YEARS = 100;

int main()
{
    float expen[YEARS][12];
    char month[12][50] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul",
                          "Aug", "Sep", "Oct", "Nov", "Dec"};
    int years;

    printf("Enter the number of years (max 100): \n");
    scanf("%d", &years);

    if (years <= 0 || years > YEARS)
    {
        printf("Invalid number of years. Please enter between 1 and %d.\n", YEARS);
        return 1;
    }

    for (int i = 0; i < years; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            printf("Enter the expenditure for year %d, month %s: ", i + 1, month[j]);
            scanf("%f", &expen[i][j]);
        }
    }

    printf("\nExpenditure Table:\n");
    for (int j = 0; j < 12; j++)
        printf("%s\t", month[j]);
    printf("\n");

    for (int i = 0; i < years; i++)
    {
        for (int j = 0; j < 12; j++)
            printf("%.2f\t", expen[i][j]);
        printf("\n");
    }

    float yrsavg[years];

    for (int i = 0; i < years; i++)
    {
        yrsavg[i] = 0;
        for (int j = 0; j < 12; j++)
        {
            yrsavg[i] += expen[i][j];
        }
    }

    printf("\nAverage expenditure per year:\n");
    for (int i = 0; i < years; i++)
    {
        printf("Year %d: %.2f\n", i + 1, yrsavg[i] / 12);
    }

    float totalavg = 0;
    for (int i = 0; i < years; i++)
    {
        totalavg += yrsavg[i];
    }
    printf("\nTotal average expenditure over %d years: %.2f\n", years, totalavg / (years * 12));

    return 0;
}
