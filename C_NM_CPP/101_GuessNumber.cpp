#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>

using namespace std;

// Este programa pede ao utilizador um número (jogo da adivinha).
int main()
{
    // maximum number of guesss
    const int MAX_GUESS = 4;

    int secret_number, // secret number
        number = -1,   // input number
        guess = 0;     //  number of guesses

    // Get a random number between 0 and 10
    srand(time(NULL)); // call once only
    secret_number = rand() % 10 + 1;



    while (guess <= MAX_GUESS) {
        cout << "escreve um numero: "; 
        cin >> number; // Get user input from the keyboard

        if(number == secret_number){
            cout << "Acertou no numero";
        }
        else{
            cout << "falhou no numero";
            guess++;
        }
    }
}
