#include<stdio.h>
int main(){

FILE*ptr;
char c;
ptr = fopen("fgets.demo.txt","r");

c = fgetc(ptr);
while(c!=EOF){     // EOF means end of file i.e file ka akhri ya end tak aur ya pehle sa compiler ko pata hai meaning

    printf("%c",c);
    c= fgetc(ptr);

}
     return 0;
}