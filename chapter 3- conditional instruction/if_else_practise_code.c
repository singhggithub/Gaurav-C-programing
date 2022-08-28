#include<stdio.h> 
// practise if else code made by gaurav to determine if person is adult or not

int main(){
     int age;
     printf("The age of person is \n");
     scanf("%d",&age);
if(age>18){
    printf("The person is adult %d \n",age);
}
else{
    printf("The person is under aged %d \n",age);
}
     return 0;
}