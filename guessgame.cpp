#include <iostream>
#include <cstdlib> // for rand() and srand ()
#include <ctime> // for time()
using namespace std;
int main () {
    // seed the random number generator
    std::srand(static_cast<unsigned>(std::time(0)));

    // generate a random number between 1 and 50
    int guessNumber = std :: rand() % 50 + 1;
    int userNumber = 0;
    int count = 0;

    // welcome the user first
    cout << "Welcome to the Number Guessing Game!" << "\n";
    cout << "I have selected a number between 1 and 50." << "\n";

    //game loop
    while (true) {
        cout << "Enter your guess: ";
        cin >> userNumber;
        count++;

        // check if the user's guess is correct
        if (userNumber > guessNumber){
            cout << "Too high! Try again." << "\n";
        } else if (userNumber < guessNumber){
            cout << "Too low! Try again." << "\n";
        } else {
            cout << "Congratulations! You guessed the number in " << count << "tries."<<"\n";
            break;
        }
    }
    return 0;
}