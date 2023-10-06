#include <iostream>
#include <cmath>
#include <limits>
#define  du double 
using namespace std;

du jog(du a, du b);
du biog(du a, du b);
du gun(du a, du b);
du vag(du a, du b);

int main() {
   cout << "\t\t\t\t\t\t Welcome to my Calculator" << endl;
    cout << "\t\t\t\t\t    Where numbers hold the key to unlocking countless outcomes!" << endl;



    // Main calculator loop
    char repeat;
    do {
        int choice;
        bool validChoice = false;

        while (!validChoice) {

            cout << "\nSelect an operation:" << endl;
            cout << "1. Addition" << endl;
            cout << "2. Subtraction" << endl;
            cout << "3. Multiplication" << endl;
            cout << "4. Division" << endl;

            cout << "Enter your choice: ";
            cin >> choice;

            if (choice >= 1 && choice <= 4) {
                validChoice = true;
            } else {
                cout << "Invalid choice! Please enter a valid choice (1-4)." << endl;
            }
        }

        du num1, num2, result;
        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;

        switch (choice) {
            case 1: // Addition
                result = jog(num1, num2);
                break;
            case 2: // Subtraction
                result = biog(num1, num2);
                break;
            case 3: // Multiplication
                result = gun(num1, num2);
                break;
            case 4: // Division
                result = vag(num1, num2);
                if (num2 == 0) {
                    cout << "Error: Division by zero is not allowed!" << endl;
                    continue; // Ask for input again
                }
                break;
        }


        cout << "Result: " << result << endl;
        cout << "Do you want to perform another calculation? (Y/N): ";
        cin >> repeat;
    } while (repeat == 'Y' || repeat == 'y');
    cout << "\nThank you for using the calculator!" << endl << endl;

    return 0;
}

// ud function
du jog(du a, du b) {
    return a + b;
}

du biog(du a, du b) {
    return a - b;
}

du gun(du a, du b) {
    return a * b;
}

du vag(du a, du b) {
    if (b != 0) {
        return a / b;
    } else {
        return numeric_limits<du>::quiet_NaN();
    }
}