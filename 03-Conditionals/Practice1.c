#include<stdio.h>
int main(){
    int x,y,z;
    float percentage;//let maximum marks in each subject is 100
    printf("marksnin subject 1 \n :");
    scanf("%d",&x);
    printf("enter marks in subject 2 :\n");
    scanf("%d",&y);
    printf("enter marks in subject 3 :\n");
    scanf("%d",&z);
    percentage=(x+y+z)/3.0;
    printf(" your overall percentage is %.2f \n",percentage);
    if (percentage>=40){
        if(x>=33 && y>=33 && z>=33){
            printf(" you have passed ");
        }else{
            printf("you have failed because you have scored less than 33 in one or more than one subjects");
        }

    return 0;
    }

}