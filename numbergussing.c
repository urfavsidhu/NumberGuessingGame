#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int random,guess;
    int attempts=0;
    srand(time(NULL)); // Seed for random number generation

    printf("Welcome to World of Guessing Numbers\n");
    random=rand()%100 + 1; // Generating random number between 1 to 100
   do
   {
    printf("Enter a number between 1 to 100:");
    scanf("%d",&guess);
    attempts++;
    

    if (guess<random){
        printf("Number is too low\n");
    }else if (guess>random){
        printf("Number is too high\n");
    }else {
        printf("Congraatulatoins! You guessed the number correctly. guessed the Number in %d attempts\n",attempts);
    }
  
   } while (guess!=random);
    printf("Thank you for playing the game\n");
    printf("Devloped by : Sidharth Sharma\n");
    return 0;
}