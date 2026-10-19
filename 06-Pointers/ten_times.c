/*#include<stdio.h>
int ten_times (int*);

int ten_times(int* x){
    return *x * 10;
}

int main(){
    int a = 6;
    printf("%d",ten_times(&a));
    return 0 ;
}*/

#include<stdio.h>
int ten_times(int);
int ten_times(int x){
return 10*x ;
}

int main(){
int a = 6;
printf("%d",ten_times(6));
return 0 ;
}
