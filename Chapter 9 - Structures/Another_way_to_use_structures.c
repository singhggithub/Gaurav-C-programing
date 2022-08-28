#include<stdio.h>
#include<string.h>
 struct new{
int code;
float salary;
char name[10];
};
int main(){
struct new employee = { 10, 555.55,"Gaurav"};
printf("%s \n ",employee.name);
printf("%.2f \n ",employee.salary);             // %.2f     here .2 means  . ka baad 2 digits rahenge
printf("%d \n ",employee.code);

     return 0;
}