#include<stdio.h>
#include<string.h>

struct employe{
int code_of_employee;
float salary;
char name[50];
};
int main(){
struct employe Facebook[100];

Facebook[0].code_of_employee = 10;
Facebook[0].salary = 555.5;
strcpy(Facebook[0].name,"Gaurav");

Facebook[1].code_of_employee = 11;
Facebook[1].salary = 555.5;
strcpy(Facebook[1].name,"miley");

Facebook[2].code_of_employee = 12;
Facebook[2].salary = 555.5;
strcpy(Facebook[2].name,"Bruce");
     return 0;
}