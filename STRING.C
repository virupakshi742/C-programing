#include<stdio.h>
int main(){
int i;
char arr[3][10]={"hi","hello"," XYZ"};
clrscr();
printf("String array elements are:\n");

for(i=0;i<3;i++)
{
printf("%s\n",arr[i]);
}
return 0;
}