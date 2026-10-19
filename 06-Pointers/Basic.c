#include<stdio.h>
int main(){
    int i = 1908;
    int *j;
    j = &i;
    printf("the address of i = %d \n",j);
    printf("the value of i = %d",*j);
    return 0;
}