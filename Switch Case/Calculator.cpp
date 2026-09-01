#include <iostream>
using namespace std;
int main()
{
    double num1;
    double num2;
    char op;

    cout << "Enter First Number: ";
    if (!(cin >> num1))
    {
        cout << "invalid input: please enter a valid number";
        return 0;
    }
    cout << "Enter Operator";
    cin >> op;

    cout << "Enter Second Number:";
    if (!(cin >> num2))
    {
        cout << "invalid input: please enter a valid number";
        return 0;
    }
    switch (op)
    {
    case '+':
        cout << num1 + num2;
        break;
    case '-':
        cout << num1 - num2;
        break;
    case '/':
        if (num2 != 0)
            cout << num1 / num2;
        else
            cout << "ERROR: Cannot Divide by Zero";
        break;
    case '*':
        cout << num1 * num2;
        break;

    default:
        cout << "Bad Operator";
    }

    return 0;
}