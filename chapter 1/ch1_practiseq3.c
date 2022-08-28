#include <stdio.h>

int main()
{
     float celcius;
     float farenheit;
     printf("Value of celcius is \n ");
     scanf("%f", &celcius);
     printf("the value of farenheit is %f",(celcius* 9/5) + 32);

     return 0;
}