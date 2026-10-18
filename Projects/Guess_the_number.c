
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int randomnumber , no_of_guesses = 0 , guessednumber;

    srand(time(0));

    randomnumber = rand() % 100 + 1;
    do {
        printf("Guess the no. between between 1 to 100\n");
        scanf("%d",&guessednumber);
    
        if (guessednumber<randomnumber){
            printf("The number is greater than %d\n", guessednumber);
        } else if (guessednumber>randomnumber){
            printf("The number is less than %d\n", guessednumber);
        } else {
            printf("Congratulations! You guessed the number.\n");
        }
        no_of_guesses++ ;
    } while (guessednumber != randomnumber);
    printf("You guessed the number in %d attempts\n", no_of_guesses);
        
    return 0;
}
