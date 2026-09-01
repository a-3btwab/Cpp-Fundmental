#include <iostream>
using namespace std;
int main()
{
    double num1, num2;
    char op;

    cout << "Enter First Number";
    cin >> num1;
    cout << "Enter The Operator[ + , - , * , / ]";
    cin >> op;
    cout << "Enter Second Number";
    cin >> num2;

    if (op == '+')
    {
        cout << "The Result is: " << num1 + num2;
    }
    else if (op == '-')
    {
        cout << "The Result is: " << num1 - num2;
    }
    else if (op == '*')
    {
        cout << "The Result is: " << num1 * num2;
    }
    else if (op == '/')
    {
        if (num2 != 0)
        {
            cout << "The Result is: " << num1 / num2;
        }
        else
        {
            cout << "ERROR:cannot divide by zero";
        }
    }
    else
    {
        cout << "Invalid operator";
    }

    return 0;
}