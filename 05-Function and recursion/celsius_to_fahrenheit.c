#include <stdio.h>

float fahrenheit(float);
float fahrenheit(float x) {
        return (x * 9/ 5.0) + 32.0;
    }
int main(){
    float celsius;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    float temperature = fahrenheit(celsius);
    printf("Temperature in Fahrenheit: %.2f\n", temperature);
    return 0;
}