#include<stdio.h>
// time stem 11:13
void slice(char*st,int m, int n){
int i =0;
while((m+i)<n){
    st[i]=st[i+m];
    i++;
}
st[i]='\0';
}
int main(){
char st []="gaurav";
printf("%s \n",st);
slice(st,1,5);
printf(" after slicing st from 1 to 5 character it becomes\n %s \n",st);
     return 0;
}