#include <cs50.h>
#include <stdio.h>

float half(float bill, float tax, int tip);

int main(void)
{
    float bill = get_float("Bill before tax and tip: ");

    float tax = get_float("Sale Tax Percent: ");

    float tip = get_float("Tip percent: ");
//find value to half
    float bill_tax_total = (bill*(tax/100))+bill;

    float bill_tip_total = (bill_tax_total*(tip/100))+bill_tax_total;

    printf("You will owe $%.2f each!\n", (bill_tip_total)/2);
}