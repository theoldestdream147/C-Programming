#include<stdio.h>
int average(int, int,int);

int average(int x, int y, int z){
    return (x+y+z)/3;
}
int main(){
    int c  = average(5, 10, 15);
    printf("Average of 5, 10 and 15 is %d", c);
}
