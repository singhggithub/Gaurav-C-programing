#include<stdio.h>
// time stem 9:41
int main(){
int arr[10];
// int *ptr=&arr[0]; we can write this also
int *ptr = arr;
ptr =ptr+2;
if(ptr==&arr[2]){    // 2 will be the third element as it starts from 0 so 0 1 2 hence 2 is the third element
    printf("These point to the same location in memory \n");
}
else{
    printf("These do not point to the same location in memory \n");

}
     return 0;
}