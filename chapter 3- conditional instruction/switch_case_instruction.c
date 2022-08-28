#include<stdio.h> 
// it can be used to coose one option from several different like giving a rating 1 to 5 
int main(){
     int rating;
     printf("give rating from 1 to 5 \n");
     scanf("%d",&rating);
    switch(rating){
case 1:
printf("the rating is 1\n");
break;
case 2:
printf("the rating is 2\n");
break;
case 3:
printf("the rating is 3\n");
break;
case 4:
printf("the rating is 4\n");
break;
case 5:
printf("the rating is 5\n");
break;
default:
printf("invalid rating !\n");
break;
    }
     
     return 0;
}