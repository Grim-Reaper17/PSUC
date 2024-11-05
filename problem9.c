#include<stdio.h>
int main(){

float temperature;
scanf("%f",&temperature);
float val = 1.8*temperature;
// printf("%f",val);
printf("%s%f%s%f","The temperature in farneheit is ",1.8*temperature+32," The temperature in celsius is ",(temperature-(float)32)*(((float)5/(float)9)));

return 0;
}