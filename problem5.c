#include<stdio.h>
int main(){

int n;
scanf("%d",&n);
printf("%s",(!(n%4))?"Leap Year ":"Not a Leap Year");
return 0;
}