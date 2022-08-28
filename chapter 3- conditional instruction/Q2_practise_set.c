#include<stdio.h> 

int main(){
     int physics, chemistry , Maths;
     float total ;
     printf("Marks obtained in physics\n");
     scanf("%d",&physics);
     printf("Marks obtained in chemistry\n");
     scanf("%d",&chemistry);
     printf("Marks obtained in maths\n");
     scanf("%d",&Maths);
     total = (physics+chemistry+Maths)/3;
     if((total>40) ||(physics>33) ||(Maths>33) || (chemistry>33) ){
         printf("The student marks are %f and have passed the exam\n",total);
     }
     else{
         printf("The students marks are %f and have failed the exam\n",total);
     }
     return 0;
}