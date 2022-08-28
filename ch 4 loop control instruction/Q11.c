#include <stdio.h>
int main()
{
    int prime = 1;
    int n=5;
    int i = 2;
    
    
    while (i < n)
    {

        if (n % i == 0)
        {
            prime = 0;
            break;
           
        }
        i++;
    }
    if (prime==0)
    {
        printf("its not a prime number");
    }
    else
    {
        printf("its a prime number");
    }
    return 0;
}