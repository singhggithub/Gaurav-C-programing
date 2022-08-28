#include <stdio.h>
int main()
{
    // Q6 (b) by using do while loop
    int i = 1, sum = 0;
    int n;
    printf("Enter value for n \n");
    scanf("%d", &n);
    do
    {

        sum += i;
        i++;
    }
    
    while (i <= n)
        ;printf("The sum of first 10 n natural numbers are %d \n", sum);

    return 0;
}