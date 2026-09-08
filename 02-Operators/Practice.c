// Write a program to check whether a number is divisible by 97 or not
#include<stdio.h>
int main(){
    int i;
    printf("enter the number :");
    scanf("%d",&i);
    if(i%97==0){
        printf("%d is divisible by 97",i);
    }else{
        printf("%d is not divisible by 97",i);
    }
    return 0;
}