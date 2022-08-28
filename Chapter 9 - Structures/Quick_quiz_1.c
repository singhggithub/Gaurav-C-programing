#include<stdio.h>
#include<string.h>
// Done without user data input that is scanf()
struct Employees{
int employee_code;
float salary;
char name[20];
};
int main(){
struct Employees A;
struct Employees B;
struct Employees C;

strcpy(A.name,"Tom");
A.employee_code = 10;
A.salary = 500;

strcpy(B.name,"Jade");
B.employee_code = 11;
B.salary = 500;

strcpy(C.name,"Chris");
C.employee_code = 12;
C.salary = 500;

printf(" Name : %s \n",A.name);
printf(" Code : %d \n",A.employee_code);
printf("Salary: %f \n\n",A.salary);


printf(" Name : %s \n",B.name);
printf(" Code : %d \n",B.employee_code);
printf("Salary: %f \n\n",B.salary);


printf(" Name : %s \n",C.name);
printf(" Code : %d \n",C.employee_code);
printf("Salary: %f \n",C.salary);
     return 0;
}