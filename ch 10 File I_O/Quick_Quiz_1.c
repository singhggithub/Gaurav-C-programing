#include<stdio.h>
// time stem 13:17
int main(){
FILE *ptr;

int num;
int num2;
int num3;

ptr = fopen("sample1.txt","r");  //  for reading file 

if(ptr==NULL){
    printf("This file does not exist BITCH!!! \n");
}
else{
fscanf(ptr,"%d",&num);
printf("The value of num is %d \n",num);

fscanf(ptr,"%d",&num2);
printf("The value of num is %d \n",num2);

fscanf(ptr,"%d",&num3);
printf("The value of num is %d \n",num3);
}

fclose(ptr);  // to close file after work is done (this is a good practice)

     return 0;
}