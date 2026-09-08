#include<stdio.h>
int main(){
    float x;
    printf("Enter salary in lakhs(per annum) :");
    scanf("%f",&x);
    if(x>=10){
        printf("you have to pay 30percent as tax");
    } else if(x>=5 && x<10) {
        printf("you have to pay 20 percent as tax");  
    }else if(x>=2.5 && x<5) {
        printf("you have to pay 10 percent as tax");
    }else{
        printf("you don't have to pay any tax");
    }
    return 0;
}