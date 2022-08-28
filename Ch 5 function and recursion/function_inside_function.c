#include <stdio.h>
void Goodmorning();
void Goodnight();
void Goodafternoon();
// time stem 5:55
//Goodmorning(); directly called by int main
// Goodnight();Goodafternoon(); is indirctly called by int main
int main()
{
    Goodmorning();
   
    
    return 0;
}
void Goodmorning()
{
    printf("Good morning Gaurav \n");
     Goodnight();
   
}
void Goodnight()  
{
    printf("Good night Gaurav \n");Goodafternoon();
}
void Goodafternoon()
{
    printf("Good afternoon Gaurav \n");
     
}