#include <iostream>

using namespace std;

int main()
{
    int num;
    int secretNum = 3;

    int guessCount = 0;
    int guessLimit = 3;
    bool outOfGuesses = false;

    cout << "Welcome to my first C++ guessing game." << endl;

    while (secretNum != num && !outOfGuesses)
    {
        cout << "Guess the number from 0 to 10" << endl;
        cin >> num;

        if (num > 10 || num < 0)
        {
            cout << "Please enter number in correct range" << endl;
            continue;
        }

        if (num == secretNum) {
            break;
        }
        
        guessCount++;
        if (guessCount >= guessLimit) {
            outOfGuesses = true;
        }
    }

    if (outOfGuesses) {
        cout << "You have out of guesses. You lose!";
        return 0;
    }

    cout << "Congratulations, you win! correct answer was" << secretNum;

}