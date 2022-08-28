#include<stdio.h> 

int main(){
     int radius=5;
     float pi=3.14;
     printf("The area of a circle is %f \n",pi*radius*radius);
     /*now comes the second part of question of modifying the same program to get volume of cylinder*/
    //  formula for volume of cylinder is pi r square h
    int height= 5;
    printf("Volume of cylinder is %f \n",pi*radius*radius*height);

     return 0;
}