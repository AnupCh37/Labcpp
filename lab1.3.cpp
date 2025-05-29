//DSbaral
/*WAP in c to store and retieve the name of the students and obtained marks in in 1st semester using structure*/
#include <stdio.h>
struct Student
{
    char name[50];
    float marks[6];
};

int main()
{
    struct Student s[48];
    int n;
    printf("Enter the number of student:\n");
    scanf("%d", &n);
    printf("Enter the detail(name & marks) of student:");
    for (int i = 0; i < n; i++)
    {
        scanf("%s", s[i].name);
        for (int j = 0; j < 5; j++)
        {
            scanf("%f", &s[i].marks[j]);
        }
    }
    printf(" The detail(name & marks) of student:");
    for (int i = 0; i < n; i++)
    {
        printf("Name: %s \n", s[i].name);
        printf("The marks in c programming ,math ,physic,FEE,Workshop is:\n");
        for (int j = 0; j < 5; j++)
        {
            printf("%f", s[i].marks[j]);
        }
    }
    return 0;
}
