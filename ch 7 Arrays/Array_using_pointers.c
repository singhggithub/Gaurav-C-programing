#include<stdio.h>
// time stem 9:10
int main(){
int mark[4];
int*ptr;
ptr=&mark[0]; // or we can write ptr = mark (Time stem 9:16)
for(int a =0; a<4;a++){
    printf("Enter mark of student %d : ",a+1);
    scanf("%d",&ptr);  // we can use ptr insttead of mark[a] because ptr=&mark[0] 
    ptr++;                               //so we also used ptr++ to increase  mark[0]to mark[1] to mark[2]and so on
}
for(int a=0; a<4;a++){
    printf("The mark of student%d is %u \n",a+1,mark[a]);
}
     return 0;
}