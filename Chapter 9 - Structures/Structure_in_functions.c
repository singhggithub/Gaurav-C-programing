#include<stdio.h>
#include<string.h>
// time stem 12:13
struct structure{
int code;
float salary;
char name[50];
};

void show(struct  structure e){
    printf("the  name employee is : %s  \n ", e.name);
    printf("the code employee is : %d  \n ", e.code);
    printf("the salary employee is : %f  \n ", e.salary);
}
int main(){
struct  structure e1;  
struct structure*ptr;
ptr = &e1;


// (*ptr).code = 10;
   //or we can write
ptr->code =10;                          //   -> this is arrow operator
ptr->salary =10235.55;                         
strcpy(ptr->name,"Gaurav");                         



show(e1);

     return 0;
}