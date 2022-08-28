#include<stdio.h>
// time stem 10:00
int main(){
int multitable[3][10];
for(int i =0;i<10;i++){
    multitable[0][i]= 2* (i+1);
}
for(int i =0;i<10;i++){
    printf("2 x %d = %d \n",i+1,multitable[0][i]);
}

for(int i =0;i<10;i++){
    multitable[0][i]= 7* (i+1);
}
for(int i =0;i<10;i++){
    printf("7 x %d = %d \n",i+1,multitable[0][i]);
}

for(int i =0;i<10;i++){
    multitable[0][i]= 9* (i+1);
}
for(int i =0;i<10;i++){
    printf("9 x %d = %d \n",i+1,multitable[0][i]);
}
     return 0;
}