#include <stdio.h>
int main()
{
    int n = 0;
    do
    {
        printf("Value of n is %d \n", n+1);
        n++;
        if (n ==14){
            break ;}
    } while (n <20);
    return 0;
}