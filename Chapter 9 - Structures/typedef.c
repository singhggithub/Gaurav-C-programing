#include<stdio.h>
#include<string.h>


 typedef struct structure{
int code;
float salary;
char name[50];
}  e;     // after putting typedef like "typedef struct structure{}"    hum rename kar sakte hai uska name koi chota name ma 

  // like  [ typedef struct structure{} e ; ]     so name will become e and we can use e instead of struct structure



void show(e emp){
    printf("the  name employee is : %s  \n ", emp.name);
    printf("the code employee is : %d  \n ", emp.code);
    printf("the salary employee is : %f  \n ", emp.salary);
}

int main(){
    // declaring e1 and pointer ptr
e e1;  
e*ptr;

// pointing ptr to e1
ptr = &e1;

ptr->code =10;                          //   -> this is arrow operator
ptr->salary =10235.55;                         
strcpy(ptr->name,"Gaurav");  

show(e1);
     return 0;
}