/*  CodSoft Internship 1st Task (Simple Calculator)
    Ish Kumar [help.arinsharma@gmail.com]           */

#include<iostream>
using namespace std;
int main() {
    double num1, num2;
    char operation;

    cout << "A Simple Calculator made in C++" << endl;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    cout << "Choose an operation (+, -, *, /): ";
    cin >> operation;

    double output;
    bool validOperation = true;

    switch (operation) {
        case '+':
            output = num1 + num2;
            break;
        case '-':
            output = num1 - num2;
            break;
        case '*':
            output = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                output = num1 / num2;
            } else {
                cout << "Note : Division by zero is not allowed." << endl;
                validOperation = false;
            }
            break;
        default:
            cout << "This is an Invalid operation. Please select an operation from above list." << endl;
            validOperation = false;
    }

    if (validOperation) {
        cout << "Result: " << output << endl;
    }

    return 0;
}
