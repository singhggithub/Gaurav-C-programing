#include<stdio.h>
// time stem 8:05 hr
void add(int a){
	printf("address of variable a is %u \n",&a);

}
int main(){
	int i =4;
		printf("address of variable a is %u \n",&i);
add(i);
	printf("address of variable a is %u \n",&i);
      return 0;
}



// in this question we pass variable to function that is why the value is not same of address 