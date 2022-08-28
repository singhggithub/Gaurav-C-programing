#include<stdio.h>
int main(){
FILE *writing_ptr;

char name[]="Gaurav singh";
int roll = 70;

writing_ptr = fopen("Generated_by_w_.txt","w");  //  for writing the file

fprintf(writing_ptr,"The name of student is \n\n %s \n",name);

fprintf(writing_ptr,"roll number is : %d \n",roll);
     return 0;
}