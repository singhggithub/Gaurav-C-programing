#include<stdio.h>
// time stem 9:50
int main(){
    int n;
    printf("Write the n number \n ");
    scanf("%d ",&n);
    
int multi[10];


for(int i =0;i<10;i++){
    multi[i]= n *(i+1);
}
for(int i =0;i<10;i++){
    printf("%d x %d = %d \n",n,i+1,multi[i]);
}
     return 0;
}