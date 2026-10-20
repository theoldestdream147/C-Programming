#include<stdio.h>

void value(int*);

void value(int* x){
    *x = 19;
}

int main(){
    int a = 6;
    int* ptr;
    ptr = &a ;
    value(ptr);
    printf("the value is %d",*ptr);
    return 0;

}