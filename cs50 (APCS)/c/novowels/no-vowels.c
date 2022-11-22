#include <cs50.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int replace(string carl);
string beans;

int main(int argc, string argv[])
{
    beans = argv[1];
    replace(beans);
    printf("%s\n", beans);
}

int replace(string carl)
{
    for (int g = 0; g < (strlen(beans) + 1); g++)
    {
        if (toupper(carl[g]) == 'A')
        {
            carl[g] = '6';
        }
        else if (toupper(carl[g]) == 'E')
        {
            carl[g] = '3';
        }
        else if (toupper(carl[g]) == 'I')
        {
            carl[g] = '1';
        }
        else if (toupper(carl[g]) == 'O')
        {
            carl[g] = '0';
        }
    }
    return 0;
}
