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
int main()
{
    vector<int> nums = {4, 1, 1, 1, 4};
    cout << grow(nums);
    cout << "\n===============================\n";
    string s = "1244";
    cout << string_to_number(s);
    cout << "\n===============================\n";
}