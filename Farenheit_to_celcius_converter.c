#include<stdio.h>
#include<math.h>
int main(){
float temp;
printf("hello!Welcome to  farenheit to celcius converter\n");
printf("'Enter the temparature value (in farenheit):\n");
scanf("%f",& temp);
float ctemp=(temp-32) * 0.5555555556;
printf("the temperature in celcius is %f\n",ctemp);
printf("Thank you\n");
return 0;
}