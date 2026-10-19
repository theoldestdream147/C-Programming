#include<stdio.h>
void star_print(int);

void star_print(int x){
    for(int i=0 ; i<x ; i++){
        for(int j=0 ; j<2*i+1; j++){
            printf("*");
        }
        printf("\n");
    }
}

int main (){
    star_print(3);
    return 0;
}
