#include<stdio.h>
int main(){
int length=0,i=0;
char str [100];
//int len=str len (str);
printf("enter a string\n");
gets(str);
while (str[i]!="\0")
{
length++;
i++;}
printf("the length od the string is%d\n",length);
return 0;
}
