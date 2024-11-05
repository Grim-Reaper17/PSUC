#include<stdio.h>
int main(){

int n;
scanf("%d",&n);
printf("%s",(!(n%2))?"Even ":"Odd");
return 0;
}