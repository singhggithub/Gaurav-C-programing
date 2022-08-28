#include<stdio.h> 
// practise if else code with logical operator && , ||mmade by gaurav to determine if
// person is legalyy allowed to drive or not

int main(){
     int age;
     int vippass=0;
     printf("The age of person is \n");
     scanf("%d",&age);
if(age<=70 && age>18 || !(vippass==1)){
    printf("The person is legal to drive %d \n",age); 
}
else{
    printf("The person is not legal to drive %d \n",age);
}
     return 0;
}