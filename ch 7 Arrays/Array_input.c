#include<stdio.h>
int main(){
int mark[4];
printf("The marks of student 1 :");
scanf("%d",&mark[0]);
printf("The marks of student 2 :");
scanf("%d",&mark[1]);
printf("The marks of student 3 :");
scanf("%d",&mark[2]);
printf("The marks of student 4 :");
scanf("%d",&mark[3]);
printf("You have entered marks %d %d %d and %d",mark[0],mark[1],mark[2],mark[3]);
     return 0;
}