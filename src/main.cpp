#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    srand(rand() ^ time(0));
    int secretNumber = rand() % 101;
    int attempts = 0;

    cout << "Welcome to the guessing game! Guess a number between 1 and 100:" << endl;


    for(;;) {
        int guess;
        cin >> guess;
        attempts += 1;

        system("clear");

        if (guess == secretNumber && secretNumber == 69) {
            cout << "it pains me to say this but your right " << guess << " is correct..." << endl;
        } else if(guess < secretNumber) {
            cout << "You guessed " << guess << " Unfortunately that is too low, try again:" << endl;            
        } else if (guess > secretNumber) {
            cout << "You guessed " << guess << " That number is too high, try again:" << endl;
        } else if (guess == secretNumber) {
            cout << "You guessed " << guess << " That's it! You guessed the number in " << attempts << " attempts!" << endl;
        } 

    }
}