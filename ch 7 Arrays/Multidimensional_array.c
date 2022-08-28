#include<stdio.h>
// time stem 9:27
int main(){
int n_students= 3;
int n_subject= 5;

int mark[3][5];
for(int i=0;i<n_students;i++){
    for(int j=0;j<n_subject;j++){
        printf("Enter the mark of student %d in subject %d \n",i+1,j+1);
    scanf("%d",&mark[i][j]);
}
}
for(int i=0;i<n_students;i++){
    for(int j=0;j<n_subject;j++){
        printf(" the mark of student %d in subject %d is %d  \n",i+1,j+1,mark[i][j]);
    
}
}
     return 0;
}