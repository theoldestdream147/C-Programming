/*
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        printf("The sum of first %d natural number is %d \n",i,i*(i+1)/2);
    }
    return 0;
}
*/
#include<stdio.h>
int main(){
    int n , sum=0;
    printf("Enter a number :");
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        sum+=i;
    }
    printf("The sum of first %d natural number is %d \n",n,sum);
    return 0;
}