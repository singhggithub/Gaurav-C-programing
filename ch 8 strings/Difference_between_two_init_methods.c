#include<stdio.h>
// time stem 10:39
int main(){
char *chr= "Gaurav";    // value of this can be changed in next line
chr = "singh";
// or we can do
char ptr[] = "Gaurav";  //  value of this cannot be changed in next line
               // so // ptr = "singh";  //  this is not valid
puts(chr);   // i could have also used printf("%s \n",chr); 
puts(ptr);
     return 0;
}