#include<stdio.h>
#include<stdlib.h>
// time stem 14:40
int main(){
int *ptr;
int n;
printf("How many integer do you want to enter : \n");
scanf("%d",&n);
ptr = (int *) calloc(n , sizeof(int));     // calloc( no.of integers , bytes required for integer) 

for(int i =0 ; i<n ; i++){
    printf("The value of %d element  \n",i+1);             // i+1 to start it from 1 instead of 0

    scanf("%d",&ptr[i]);
}


for(int i =0 ; i<n ; i++){

    printf("The value of %d element is: %d \n",i+1,ptr[i]);

}


     return 0;
}