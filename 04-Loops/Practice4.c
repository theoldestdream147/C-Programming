#include<stdio.h>
int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    for (int i = 1; i<=n ; i++){
        if (n%i ==0){
            if (i==1 && i==n){
                printf("%d is a prime number",n);
            }else if (i==1 || i==n){
                continue;
            }else{
                printf("%d is not a prime number",n);
                break;
            }
        }
    }
    return 0;
}