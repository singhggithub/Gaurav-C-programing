#include<stdio.h> 

int main(){
    //code with harry c language 4:19 min
     int i=5 ,a=5;
     printf("the value of i++ %d \n",i++);
     printf("the value of i is%d \n",i); //here we used ++ after i like this i++ that is why first 
     // i value gets print than ++ is added and in next line the i value prints 6

     printf("the value of a is %d ",++a);// here we used ++ before a so compiler interpreted ++ first
     // and a next and that is why added 1 to a and value of a became 6

// # imp note
 //i++   pehle i ki value print fir increment
 //++i pehle i ki value increment fir print
 //i-- pehle i ki value print fir decrement
 //--i pehle i ki value decrement fir print
 i+=5;
 printf("the value of i is %d \n",i); // in i+=5 ,5 is added to value of i
 
     return 0;
}