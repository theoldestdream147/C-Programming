#include <stdio.h>
int main(){
    float a,b,c,d;
    printf("Enter the first number :\n");
    scanf("%f", &a);
    printf("Enter the second number :\n");
    scanf("%f", &b);
    printf("Enter the third number :\n");
    scanf("%f", &c);
    printf("Enter the fourth number :\n");    
    scanf("%f", &d);
    if (a>b && a>c && a>d){
        printf("%f is the greatest number \n",a);
    } else if (b>a && b>c && b>d){
        printf("%f is the greatest number \n",b);
    } else if (c>a && c>b && c>d){
        printf("%f is the greatest number \n",c);
    } else {
        printf("%f is the greatest number \n",d);
    }
    return 0;
}