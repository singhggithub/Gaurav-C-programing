#include<stdio.h>
// time stem 6:46
float force(float m);
float main(){
float mass = 6.8;
printf("The force of attraction for mass %.3f is %.3f",mass,force(mass));
     return 0;
}
float force(float m){
   
   return  m*9.8  ; // formual to convert mass into force
}