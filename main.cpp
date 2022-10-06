//Compiler only reads whole numbers from console inputs.
#include <iostream>
using namespace std;

int main() {
        cout << "Enter a whole number, and "
                "we will tell you if it is "
                "an even or odd number: ";
        int userInput;
        cin >> userInput;
        int inputRemainder = userInput % 2;
        if (inputRemainder == 0) {
            cout << "Your number " << userInput << " is even" <<;
        } else if (inputRemainder == 1) {
            cout << "Your number " << userInput << " is odd.";
        } else
            cout << "Please enter a whole number." <<;
    return 0;
}
