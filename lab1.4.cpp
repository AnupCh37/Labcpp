//DSBaral
/*Write a program in c to read name, rollno, address, and phone number of each student
in your class using structure. Store the information in file so that you can
recover the information later. While recovering the information from the file
sort the information alphabetically according to the name.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Student
{
    char name[50];
    int rollno;
    int phno;
    char address[50];
};
int main()
{
    struct Student s[48], temp, p[48];
    int n, i;
    FILE *fpw = fopen("student.txt", "wb");
    if (fpw == NULL)
    {
        printf("Error opening file:");
        exit(1);
    }
    printf("Enter the number of student: \n");
    scanf("%d", &n);
    printf("Enter the detail (Name/rollno/phno/address):\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%s %d %d %s", s[i].name, &s[i].rollno, &s[i].phno, s[i].address);
        fwrite(&s[i], sizeof(struct Student), 1, fpw);
    }
    fclose(fpw);
    FILE *fpr = fopen("student.txt", "rb");
    if (fpr == NULL)
    {
        printf("Error opening file");
        exit(1);
    }

    for (int i = 0; i < n; i++)
    {
        fread(&p[i], sizeof(struct Student), 1, fpr);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (strcmp(p[i].name, p[j].name) > 0)
            {
                temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
    }
    printf("The detail of student in alphabatical order is:");
    for (int i = 0; i < n; i++)
    {
        printf("%s %d %d %s", p[i].name, p[i].rollno, p[i].phno, p[i].address);
    }
    fclose(fpr);
    return 0;
}
