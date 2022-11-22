#include <cs50.h>
#include <math.h>
#include <stdio.h>
//difine mina nd max of days
#define MAX_DAYS 31
#define MIN_DAYS 28
//promts days then ammount of pennies andthe the $ ammount
int main(void)
{
    int days;
    do
    {
        days = get_int("Days in month: ");
    }
    while (days < MIN_DAYS || days > MAX_DAYS);

    int pennies;
    do
    {
        pennies = get_int("Pennies on first day: ");
    }
    while (pennies <= 0);

    long long total = pennies;

    for (int i = 1; i < days; i++)
    {
        total += pennies * pow(2, i);
    }
    printf("$%.2f\n", ((double) total) / 100);
}