#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

unsigned int strCount(const std::string &word, char letter)
{

    int count = 0;
    for (int i = 0; i < word.length(); i++)
    {
        if (word[i] == letter)
        {
            count++;
        }
    }
    return count;
}
// return count (word.begin(),word.end(),letter);

//===============================================
int past(int h, int m, int s)
{
    int millisecond = 0;

    return millisecond += (h * (60 * 60000)) + (m * (60000)) + (s * (1000));
}
//===============================================
string to_alternating_case(const std::string &str)
{
    string result = "";
    for (int i = 0; i < str.length(); i++)
    {
        if (isupper(str[i]))
        {
            result += tolower(str[i]);
        }
        else
        {
            result += toupper(str[i]);
        }
    }
    return result;
}
//===============================================
bool zero_fuel(int distance_to_pump, int mpg, int fuel_left)
{
    return distance_to_pump <= (mpg * fuel_left) ? true : false;
}
//===============================================
bool is_uppercase(const std::string &s)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (islower(s[i]))
        {
            return false;
        }
    }
    return true;
}
//===============================================
int basicOp(char op, int val1, int val2)
{
    int result = 0;
    switch (op)
    {
    case '+':
        return result += (val1 + val2);
    case '-':
        return result += (val1 - val2);
    case '/':
        return result += (val1 / val2);
    case '*':
        return result += (val1 * val2);
    default:
        return false;
    }
}
int main()

{
    string word = "Hello";
    char letter = 'l';
    cout << strCount(word, letter);
    cout << "\n==========================\n";
    int h = 0, m = 1, s = 1;
    cout << past(h, m, s);
    cout << "\n==========================\n";
    string str = "AbDeLrAhMaN";
    cout << to_alternating_case(str);
    cout << "\n==========================\n";
    int distance_to_pump = 50;
    int mpg = 25;
    int fuel_left = 2;
    cout << zero_fuel(distance_to_pump, mpg, fuel_left);
    cout << "\n==========================\n";
    string str2 = "HELLO";
    cout << is_uppercase(str2);
    cout << "\n==========================\n";
    char op = '/';
    int val1 = 5;
    int val2 = 1;
    cout << basicOp(op, val1, val2);
}