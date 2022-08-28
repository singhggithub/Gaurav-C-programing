#include<stdio.h>
#include<stdlib.h>
// time stem 14:40
int main(){
int *ptr;
ptr = (int *) calloc(6 , sizeof(int));     // calloc( no.of integers , bytes required for integer) 

// for(int i =0 ; i<6 ; i++){
//     printf("The value of %d element  \n",i+1);             // i+1 to start it from 1 instead of 0

//     scanf("%d",&ptr[i]);
// }
//  (agr hum ya upar waala code use na karein values dene ka liye toh calloc sabki value 0 kar dega by default )

for(int i =0 ; i<6 ; i++){

    printf("The value of %d element is: %d \n",i+1,ptr[i]);

}


     return 0;
}