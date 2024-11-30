#include<stdio.h>
int main()
{
int num =10,*ptr;
ptr=&num;
*ptr=20;
printf("upadated value of num %d\n",num);
return 0;
}