
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int randomNumber, guess;

    // Initialize the random number generator
    srand(time(0));

    // Generate a random number between 1 and 100
    randomNumber = rand() % 100 + 1;

    cout << "Guess a number between 1 and 100: ";
    cin >> guess;

    // Keep looping until the guess is correct
    while (guess != randomNumber) {
        if (guess > randomNumber) {
            cout << "Too high. Try again." << endl;
        }
        else {
            cout << "Too low. Try again." << endl;
        }

        cout << "Enter another guess: ";
        cin >> guess;
    }

    cout << "Congratulations. You figured out my number." << endl;

    return 0;
}
