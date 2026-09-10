#include <iostream>
using namespace std;

float calc(float num1, char op, float num2)
{
    if (op == '+')
        cout << num1 + num2;
    else if (op == '-')
        cout << num1 - num2;
    else if (op == '*')
        cout << num1 * num2;
    else if (op == '/')
        if (num2 == 0)
            cout << "Cannot divided by Zero";
        else
            cout << num1 / num2;
    else
        cout << "Error: Bad Input";
}

int main()
{
    float num1;
    float num2;
    char op;

    cout << "Enter Number ";
    cin >> num1;
    cout << "Enter a Operator";
    cin >> op;
    cout << "Enter anuther Number";
    cin >> num2;
    calc(num1, op, num2);

    return 0;
}