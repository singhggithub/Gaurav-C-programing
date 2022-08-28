#include<stdio.h>
#include<stdlib.h>
// time stem 14:50
int main(){
int *ptr1 ;
int* ptr2;
ptr1 = (int *) malloc(600 * sizeof(int));    

for(int i =0 ; i<600 ; i++){
ptr2 = (int *) malloc(600000 * sizeof(int));    

    printf("The value of %d element  \n",i+1);           

    scanf("%d",&ptr1[i]);
    free(ptr2);  // free kar deta hai memory loop ek bar use hone ka ya run hone ka baad
}


for(int i =0 ; i<600 ; i++){

    printf("The value of %d element is: %d \n",i+1,ptr1[i]);

}


     return 0;
}