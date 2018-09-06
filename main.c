// Rodrigo Perez Solis
// A01411278

#include <stdio.h>

int main() {
    //State variables
    int fibonacci;
    int newFibonacci = 1;
    int num1 = 0;
    int num2 = 1;


    //ask the user the amount of Fibonacci numbers they want
    printf("How many Fibonacci numbers do you want?");
    //here the amount of variables are saved
    scanf("%d", &fibonacci);

    printf("this is your fibonacci sequence \n");

    //Start the "for" loop
    for(int count = 0; count < fibonacci ; count += 1){
        printf("%i\n", newFibonacci);
        newFibonacci = num1 + num2;
        num1 = num2;
        num2 = newFibonacci;
    }

    printf("this are the fibonacci numbers you asked for!\n");
    return 0;

}

