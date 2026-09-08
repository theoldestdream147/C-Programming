#include<stdio.h>
int main(){
    int x;
    printf("enter marks :");
    scanf("%d",&x);
    if(x>=90 && x<=100){
        printf("A grade");
    }
    else if(x>=80){
        printf("B grade");
    }
    else if(x>=70){
        printf("C grade");
    }
    else if(x>=60){
        printf("D grade");
    }
    else if(x>=50){
        printf("E grade");
    }else{
        printf("F grade ");
    }
}