#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;
int grow(vector<int> nums)
{
    int multiply = nums.at(0);
    for (int i = 1; i < nums.size(); i++)
    {
        multiply *= nums.at(i);
    }
    return multiply;
}
//===========================================================

int string_to_number(const std::string &s)
{
    return stoi(s);
}
//===========================================================
string sliceString(string str)
{
    string result = "";
    for (int i = 1; i < (str.length() - 1); i++)
    {
        result += str[i];
    }
    return result;
}
/**{
 return str.substr(1, str.length() - 2);
 }*/
//===========================================================
string repeat_str(int repeat, string str)
{
    string result = "";
    for (int i = 0; i < repeat; i++)
    {
        result += str;
    }
    return result;
}
//===========================================================
string no_space(const string &x)
{
    string clear = "";
    for (int i = 0; i < x.length(); i++)
    {
        if (x[i] != ' ')
        {
            clear += x[i];
        }
    }
    return clear;
}

int main()

{
    vector<int> nums = {4, 1, 1, 1, 4};
    cout << grow(nums);
    cout << "\n==========================\n";
    string s = "1244";
    cout << string_to_number(s);
    cout << "\n==========================\n";
    string str = "hello";
    cout << sliceString(str);
    cout << "\n==========================\n";
    int repeat = 3;
    string str2 = "*";
    cout << repeat_str(repeat, str);
    cout << "\n==========================\n";
    string x = "H e ll o !";
    cout << no_space(x);
}