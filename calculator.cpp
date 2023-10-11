#include <iostream>
using namespace std;

int main() {
    char operator_choice;
    double num1, num2;

    cout << "Welcome to Simple Calculator\n";
    cout << "-----------------\n";

    cout << "Enter first number:\n ";
    cin >> num1;
    cout << "-----------------\n";

    cout << "Enter an operator (+, -, *, /):\n ";
    cin >> operator_choice;
    cout << "-----------------\n";

    cout << "Enter second number:\n ";
    cin >> num2;
    cout << "-----------------\n";

    double result;
    switch (operator_choice) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                cout << "Error: Division by zero\n";
                cout << "-----------------\n";
                return 1; 
            }
            break;
        default:
            cout << "Invalid operator\n";
            cout << "-----------------\n";
            return 1; 
    }

    cout << "Result:\n " << result << endl;
    cout << "-----------------\n";

    return 0;
}
