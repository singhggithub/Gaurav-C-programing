#include<stdio.h>
//time stem 9:18
void array(int ptr[],int n){
    for(int i=0;i<n;i++){
        printf("The value of element %d is %d \n ",i+1,ptr[i]);
    }
}
int main(){
int arr[]= {55,65,48,63,9,8,22};
array(arr,7);
     return 0;
}