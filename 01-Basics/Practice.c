//Writer a program to convert celsius to fahrenheit
#include<stdio.h>
int main(){
    float celsius , fahrenheit;
    printf("enter temperature in celsius :");
    scanf("%f",&celsius);
    fahrenheit = (celsius*(9.0/5) + 32);
    printf("the temperature in fahrenheit is %f",fahrenheit);
    return 0;
}