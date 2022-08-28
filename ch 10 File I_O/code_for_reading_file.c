#include<stdio.h>
// time stem 13:17
int main(){
FILE *read_ptr;

int num;
int num2;
int num3;

read_ptr = fopen("sample.txt","r");  //  for reading file 

fscanf(read_ptr,"%d",&num);
printf("The value of num is %d \n",num);

fscanf(read_ptr,"%d",&num2);
printf("The value of num is %d \n",num2);

fscanf(read_ptr,"%d",&num3);
printf("The value of num is %d \n",num3);

fclose(read_ptr);  // to close file after work is done (this is a good practice)
     return 0;
}