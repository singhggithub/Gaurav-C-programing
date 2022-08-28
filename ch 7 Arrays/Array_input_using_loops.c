//Time stem 8:44
#include<stdio.h>
int main(){
int mark[5];
for(int i=0; i<5; i++){
    printf("Enter marks of student %d :\n",i+1); // i+1 because as we know index in c starts from 0 so for 0to5 it will be 0 1 2 3 4 but we want it as 1 2 3 4 5
      scanf("%d",&mark[i]);                                                                 // so we took i+1 to start it from 1 instead of zero
      }                                                                                       

for(int i=0; i<5; i++){
    printf("mark of student %d is %d \n",i+1,mark[i]); 
}                                             
     return 0;
}