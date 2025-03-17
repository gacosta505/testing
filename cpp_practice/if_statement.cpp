#include <iostream>
using namespace std;

int main() {
    int number;
    // Ask user for input
    cout << "Enter a number: ";
    cin >> number;

    // If statement that chesk if number is positive
    if (number > 0){
        cout << "The number is positive!" << endl;
    }
    else if (number<0) {
        cout << "The number is negative!" << endl;
    }
    else {
        cout << "The number is zero!" << endl;
        }
    return 0;
}



