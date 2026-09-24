#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;
vector<int> MonkeyCount(int n)
{
    vector<int> numbers;
    for (int i = 1; i < (n + 1); i++)
    {
        numbers.push_back(i);
    }
    return numbers;
}
//====================================
string sum_str(string a, string b)
{
    int x = 0;
    int y = 0;
    if (a.empty())
    {
        x = 0;
    }
    else
        x = stoi(a);

    if (b.empty())
    {
        y = 0;
    }
    else
        y = stoi(b);
    string result = "";
    result = to_string(x + y);
    return result;
}
//====================================
int get_age(string she_said)
{
    return she_said[0] - '0';
}
//====================================
string multi_table(int number)
{
    string result = "";
    for (int i = 1; i <= 10; i++)
    {
        int multi = 0;
        multi += (number * i);
        result += to_string(i) + " * " + to_string(number) + " = " + to_string(multi) + "\n";
    }
    return result;
}
//====================================
string bonus_time(int salary, bool bonus)
{
    string result = "$";
    if (bonus == true)
    {
        result += to_string(salary * 10);
    }
    else
        result += to_string(salary);

    return result;
}
int main()

{
    int n = 10;
    cout << MonkeyCount(n).at(6);
    cout << "\n=============================\n";
    string a = "5";
    string b = "";
    cout << sum_str(a, b);
    cout << "\n=============================\n";
    string she_said = "9 years old";
    cout << get_age(she_said);
    cout << "\n=============================\n";
    int number = 5;
    cout << multi_table(number);
    cout << "\n=============================\n";
    int salary = 45234;
    bool bonus = true;
    cout << bonus_time(salary, bonus);
}
