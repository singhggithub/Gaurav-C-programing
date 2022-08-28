#include <stdio.h>

int main()
{
    int a;
    // b = a;         // not valid
    int v = 3 ^ 3; // it runs successfully therefor this is valid term

    char dt = '21 DEC 2021'; // this is not valid because we cant give dt more than one character
                             // through char constant
    return 0;
}