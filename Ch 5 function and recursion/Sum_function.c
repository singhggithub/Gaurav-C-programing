#include<stdio.h>
//time stem 6:07
// it means Sum is a function which takes a and b as an input and return integer as an output
int sum (int a, int b); //therefore this is function prototype declaration 

int main(){

int c;
 c= sum (8,5);
 printf("The value of c is \n %d",c);
     return 0;
}
int sum (int a, int b){
    int add  ;
    add = a + b;
    return add ;

}
