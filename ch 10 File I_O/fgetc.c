#include<stdio.h>
int main(){

// we can use fgets in both read and write i.e "r" & "w"

FILE*ptr;
ptr = fopen("fgets.demo.txt","r");
// char c = fgetc(ptr);
printf("The value of my character is %c \n",fgetc(ptr));      // fgetc()  is used to read character by character
printf("The value of my character is %c \n",fgetc(ptr));
printf("The value of my character is %c \n",fgetc(ptr));
printf("The value of my character is %c \n",fgetc(ptr));
printf("The value of my character is %c \n",fgetc(ptr));
printf("The value of my character is %c \n",fgetc(ptr));

     return 0;
     fclose(ptr);
}