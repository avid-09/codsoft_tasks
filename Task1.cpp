#include <iostream>
#include <cstdlib>   // For rand() and srand()
#include <ctime>     // For time()
using namespace std;

void clearScreen() {
#ifdef _WIN32
    system("cls"); // For Windows
#else
    system("clear"); // For Linux and macOS
#endif
}

int main() {
    srand(time(0));
    char plgagn;

    do {
        clearScreen();
        cout << "Instructions:\n";
        cout << "1. The program will generate a random number between 1 and 100." << endl;
        cout << "2. You need to guess the correct number." << endl;
        cout << "3. After each guess, you will receive feedback on whether the number is too high or too low." << endl;
        cout << "4. Keep guessing until you find the correct number." << endl;
        cout << "5. Have fun and enjoy the game!" << endl;

        int rn = rand() % 100 + 1;
        int we;
        int atms = 0;

        do {
            if (atms > 0) {
                cout << "Give another try: ";
            } else {
                cout << "Guess a number between 1 and 100: ";
            }
            cin >> we;
            atms++;
            cout << "\n";
            if (we == rn) {
                cout << "\033[1;32mCongratulations!\033[0m You guessed the correct number in " << atms << " atms.\n";
            } else if (we > rn) {
                cout << "\033[1;33mToo High!\033[0m ";
            } else {
                cout << "\033[1;33mToo Low!\033[0m ";
            }
        } while (we != rn);

        cout << "\nDo you want to play again? (y/n): ";
        cin >> plgagn;
        cout << "\n";
    } while (plgagn == 'y' || plgagn == 'Y');

     cout << "\033[1;31mThank you for playing the Number Guessing Game!\033[0m" <<"\n"<<endl;
    return 0;
}