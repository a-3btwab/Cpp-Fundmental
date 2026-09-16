#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string even_or_odd(int num)
{
    return (num % 2 == 0) ? "Even" : "Odd";
}
//===========================================
int centuryFromYear(int year)
{
    if (year % 100 == 0)
    {
        return year / 100;
    }
    else
    {
        return year / 100 + 1;
    }
}
//===========================================
int simpleMultiplication(int a)
{
    return (a % 2 == 0) ? a * 8 : a * 9;
}
//===========================================
string bool_to_word(bool value)
{
    return value ? "Yes" : "No";
}
//===========================================
bool isDivisible(int n, int x, int y)
{
    if (n % x == 0 && n % y == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
//===========================================
string reverse(string str)
{
    string reversed = "";
    for (int i = str.length() - 1; i >= 0; i--)
    {
        reversed += str[i];
    }
    return reversed;
    //============Another Solution by iterator============

    /**revers(str.begin(),str.end());
    return str;*/
}

int main()
{
    cout << "\n===============================\n";
    int num = 5;
    cout << even_or_odd(num);
    cout << "\n===============================\n";
    int year = 2026;
    cout << centuryFromYear(year);
    cout << "\n===============================\n";
    int a = 16;
    cout << simpleMultiplication(a);
    cout << "\n===============================\n";
    bool value = 1;
    cout << bool_to_word(value);
    cout << "\n===============================\n";
    int n = 5, x = 50, y = 25;
    cout << isDivisible(n, x, y);
    cout << "\n===============================\n";
    string str = "Hello";
    cout << reverse(str);
    cout << "\n===============================\n";
}