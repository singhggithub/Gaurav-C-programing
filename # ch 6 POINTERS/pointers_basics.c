#include <stdio.h>
int main()
{
    int i = 5;
    int*j = &i; // *j is a pointer which will store address of i
    printf("The value of i is %d \n", i);
    printf("The value of i is %u \n", *j);

    printf("The address of i is %d \n", j); // because j is a pointer which stores address of i
     printf("The address of i is %u \n\n", &i); // regular

     // now 
     printf("The address of j is %d\n\n", (&j));

     printf("The value of j is %u \n",*(&j));
      printf("The value of j is %d \n",j);
      printf("The value of j is %u\n",j);
    return 0;
}