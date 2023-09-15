#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
    int high = 100;
    int chance = 7;

    //print the rule
    printf("The computer will generate a random number between 1 and %d\n"
           "You have %d chances", high, chance);

    //generate a random number
    int secret;

    while (chance > 0){

    srand(time(NULL));
    int secrect ;
    secret = rand() % high + 1;
    //printf("*%d*",secret);
    
    //let the player enter his guess number
    //store the guss number,
    //compaare it with the secret,
    //and inform the player of the result
    int guess;
    scanf("%d", &guess);
    
    if (guess == secret) {
        printf("You Win!\n");
        break;
    }   else if (guess > secret){
        printf("guess > secret");
    }   else {
        printf("guess < secret");
    }

    //loop:repeat until the player 
    chance = chance - 1;
    }
}