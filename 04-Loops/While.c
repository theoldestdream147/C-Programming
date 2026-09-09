#include<stdio.h>
int main(){
    int i = 0;
    while (i<=20){
        if (i>=10){
            printf("%d \n",i);
            i++;    //i++ print first then increment
                    //++i increment first then print 
        }else{
            i++;
        }
    
    }
    return 0;
}