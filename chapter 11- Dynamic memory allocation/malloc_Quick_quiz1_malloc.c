#include<stdio.h>
#include<stdlib.h>
// time stem 14:38
int main(){
float *ptr;
ptr = (float *) malloc(5 * sizeof(float));     // malloc( no.of float * bytes required for float) 

for(int i =0 ; i<5 ; i++){
    printf("The value of %d element  \n",i+1);             // i+1 to start it from 1 instead of 0

    scanf("%f",&ptr[i]);
}


for(int i =0 ; i<5 ; i++){

    printf("The value of %d element is: %f \n",i+1,ptr[i]);

}


     return 0;
}