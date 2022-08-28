#include<stdio.h>
//time stem 8:57
int main(){
int i= 34;
int *ptr =&i;
char c='g';
char *chr = &c;
float f=1.5;
float *flt=&f;
printf("The value of ptr is %u \n",ptr);
ptr++;                          // our integer size  is of 4 byte (normally) so when we use ptr++ in it 
printf("The value of ptr is %u \n",ptr);             // then the value of ptr will increase with 4 bytes i.e 6422216 to 6422220 
ptr--;
printf("The value of ptr is %u \n",ptr); // our integer is of 4 byte (normally) so when we use ptr-- in it 
 // then the value of ptr will decrease with 4 bytes i.e 6422220 to 6422216

ptr= ptr+2;
printf("The value of ptr is %u \n",ptr);
ptr= ptr-2;
printf("The value of ptr is %u \n",ptr);

printf("The value of chr is %u \n",chr);
chr++;                                    // our character size  is of 1 byte (normally) so when we use chr++ in it 
printf("The value of chr is %u \n",chr);  // then the value of chr  will increase with 1 bytes i.e 6422211 to 6422212 
chr--;
printf("The value of chr is %u \n",chr);
chr = chr+1;
printf("The value of chr is %u \n",chr);
chr = chr-1;
printf("The value of chr is %u \n",chr);

printf("The value of flt is %u \n",flt);
flt++;
printf("The value of flt is %u \n",flt);
flt--;
printf("The value of flt is %u \n",flt);
flt = flt+1;
printf("The value of flt is %u \n",flt);
flt = flt-1;
printf("The value of flt is %u \n",flt);

     return 0;                           

}