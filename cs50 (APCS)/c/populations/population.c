#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // ask start population size
    int start;
    do
    {
        start = get_int("What is the start population: \n");
    }
    while (start < 9);

    // ask end population size
    int end;
    do
    {
        end = get_int("What is the end population: \n");
    }
    while (end < start);

    // calculate number of years until population wanted
    int years = 0;
    while (start < end)
    {
        start = start + (start / 3) - (start / 4);
        years++;
    }
    // print number of years
    printf("Years: %d\n", years);
}