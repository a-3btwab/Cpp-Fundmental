/**
================================
========= Solution One =========
================================
**/
#include <iostream>
using namespace std;
int main()
{
    int first_num;
    int second_num;
    int third_num;

    cout << "Enter frist number: ";
    cin >> first_num;
    cout << "Enter second number: ";
    cin >> second_num;
    cout << "Enter third number: ";
    cin >> third_num;

    if (first_num > second_num && first_num > third_num)
    {
        cout << "The Greatest Number is: " << first_num;
    }
    else if (second_num > third_num)
    {
        cout << "The Greatest Number is: " << second_num;
    }
    else
    {
        cout << "The Greatest Number is: " << third_num;
    }

    return 0;
}

/**
================================
========= Solution Two =========
================================


#include <iostream>
using namespace std;
int main()
{
    int first_num;
    int second_num;
    int third_num;

    cout << "Enter frist number: ";
    cin >> first_num;
    cout << "Enter second number: ";
    cin >> second_num;
    cout << "Enter third number: ";
    cin >> third_num;

    if (first_num > second_num)
    {
        if (first_num > third_num)
        {
            cout << "The Greatest Number is: " << first_num;
        }
        else if (third_num > second_num)
        {
            cout << "The Greatest Number is: " << third_num;
        }
        else
        {
            cout << "The Greatest Number is: " << second_num;
        }
    }
    else if (second_num > third_num)
    {
        cout << "The Greatest Number is: " << second_num;
    }
    else
    {
        cout << "The Greatest Number is: " << third_num;
    }

    return 0;
}**/