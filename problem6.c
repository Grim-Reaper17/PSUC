#include<stdio.h>
int main(){
int a,b;
scanf("%d%d",&a,&b);

int c = a;
a=b;
b=c;
printf("%s%d%c%d","The swapped variables are : ",a,' ',b);
return 0;
}