#include<stdio.h>

//function declaration
void addNumber(int a,int b);

int main(){
	  addNumber(10,20);//function call with parameter
	  return 0;
}
//function defnition with parameter
void addNumber(int a, int b){
	    int sum = a + b;
	    printf("sum of %d and %d is : %d\n",a,b,sum);
}