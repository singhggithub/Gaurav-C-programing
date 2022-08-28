#include<stdio.h> 

int main(){
     // code with harry c language time 3:52
     //according to ASCII table from google lower case letters are from 97-122 that is 97-122=a-z
     char ch;
     printf("Enter the character\n");
     scanf("%c",&ch);
     if(ch>=97 && ch<=122){
printf("the character is lower case");
     }
     else{
         printf("the character is not lower case");
     }
     return 0;
}