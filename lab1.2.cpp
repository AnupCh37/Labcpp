// DSbaral
/*WAP to find the position of the character 'c' in sentence "idea without execution is worthless" using pointer and string*/
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100] = {"idea without execution is worthless"};
    char *ptr;
    ptr = &str[0];
    int count = -100;
    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        if (*(ptr + i) == 'c')
        {
            count = i;
            break;
        }
    }
    if (count != -100)
    {
        printf("The character 'c' is found in the position : %d", count + 1);
    }
    else
        printf("The character 'c' isnot found in the sentence : ");
    return 0;
}