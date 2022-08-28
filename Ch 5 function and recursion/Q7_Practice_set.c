#include <stdio.h>
void pattern(int n); // here n is number of lines
int main()
{ // time stem 6:59 hr
    int a =3;
    pattern(a);

    return 0;
}
void pattern(int n)
{
    if (n == 1)
    {
        printf("*\n");
    }
    else
    {
        pattern(n - 1);
        for (int i = 0; i < 2 * n - 1; i++)
        {
            printf("*");
        }
        printf("\n");
    }
}