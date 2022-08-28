#include<stdio.h>
#include<stdlib.h>
// time stem 14:57
int main(){
int *ptr;
ptr = (int *) malloc(6 * sizeof(int));     

for(int i =0 ; i<6 ; i++){
    printf("The value of %d element  \n",i+1);             

    scanf("%d",&ptr[i]);
}


for(int i =0 ; i<6 ; i++){

    printf("The value of %d element is: %d \n",i+1,ptr[i]);

}

// Reallocate ptr using realloc()

ptr = realloc(ptr, 10*sizeof(int));       // we reallocated ptr size from 6 to 10

for(int i =0 ; i<10 ; i++){
    printf("The value of %d element  \n",i+1);             

    scanf("%d",&ptr[i]);
}


for(int i =0 ; i<10 ; i++){

    printf("The value of %d element is: %d \n",i+1,ptr[i]);

}


     return 0;
}