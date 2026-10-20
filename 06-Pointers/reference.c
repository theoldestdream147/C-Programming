#include<stdio.h>

int* value(int*);

int* value(int* x){
    return x;
}

int main(){
    int a = 6;
    int* ptr;
    ptr =value(&a) ;
    printf("the value is %d",*ptr);
    return 0;

}