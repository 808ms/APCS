#include<stdio.h>
#include<cs50.h>

int main(void)
{
  float cel = get_float("What is your temp: \n");
  float fah = ((cel*9)/5)+32;

  printf("Fahrenheit: %.1f\n",fah);
}