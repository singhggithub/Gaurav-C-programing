#include<stdio.h>
#include<string.h>
// time stem 11:34
struct employe{
int code_of_employee;
float salary;
char name[10];
};
int main(){
struct employe e1;     
// e1.name = "Gaurav";  --> This wont work 
 strcpy(e1.name,"Gaurav"); //--> This will work  "strcpy( element type , element value )"
 e1.code_of_employee = 70;
 e1. salary = 505000.854;          

 printf("Name : %s \n ",e1.name);              // %s to print strcpy(e1.name,"Gaurav")
 printf("Code : %d \n ",e1.code_of_employee);
 printf("Salary : %f \n ",e1. salary);
     return 0;
}

 // struct employe is a structure and it works like an int , float or char

 //e1.code_of_employee  , e1. salary  ,e1.name  here dot (.) after every e1 is there , this dot (.) is called "member operator" 
 //here dot (.) in [e1.code_of_employee = 70] means   e1 ka code_of_employee = 70;