#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
   
    srand(time(0));

    // Generate a random number between 1 and 100
    int secretNumber = rand() % 100 + 1;

    int guess;
    int attempts = 0;
    bool hasGuessedCorrectly = false;

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I've selected a random number between 1 and 100. Try to guess it." << endl;

    while (!hasGuessedCorrectly) {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess == secretNumber) {
            cout << "Congratulations! You've guessed the correct number (" << secretNumber << ") in " << attempts << " attempts." << endl;
            hasGuessedCorrectly = true;
        } else if (guess < secretNumber) {
            cout << "please guess higher number than ("<< guess <<")" << endl;
        } else {
            cout << "please guess lower number than (" << guess << ")" << endl;
        }
    }

    return 0;
}
 