// Calculate your half of a restaurant bill
// Data types, operations, type casting, return value

#include <cs50.h>
#include <stdio.h>

float half(float bill, float tax, int tip);

int main(void)
{
    float bill = get_float("Bill before tax and tip: ");
    float tax = get_float("Sale Tax Percent: ");
    int tip = get_int("Tip percent: ");

    printf("You will owe $%.2f each!\n", (half(bill, tax, tip)));
}

// TODO: Complete the function
float half(float bill, float tax, int tip)
{
    float bill_tax_total = (bill*(tax/100))+bill;

    float bill_tip_total = (bill_tax_total*(tip/100))+bill_tax_total;

    float total = bill_tip_total/2;
    return total;
}
