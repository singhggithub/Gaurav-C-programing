#include<stdio.h>
// time stem 10:5
// ##################    SOLVING QUESTION 7 BY FUNCTION      ###############################
void printtable(int *multitable, int num,int n){
    printf("The multiplication table of %d is : \n",num);
    for(int i =0;i<n;i++){
    multitable[i]= num* (i+1);
}
for(int i =0;i<n;i++){
    printf("%d x %d = %d \n",num,i+1,multitable[i]);
}
printf("**********************************************************\n\n");
}
int main(){
int multitable[3][10];
printtable(multitable[0],2,10);
printtable(multitable[1],7,10);
printtable(multitable[2],9,10);
     return 0;
}