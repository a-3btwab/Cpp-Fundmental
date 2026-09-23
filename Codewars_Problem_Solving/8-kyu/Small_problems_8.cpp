#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;
int sumOfDifferences(const std::vector<int> &arr)
{
    vector<int> v = arr;
    int result = 0;
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    if (v.empty() || v.size() == 1)
    {
        return 0;
    }
    else if (v.size() > 1)
    {
        for (int i = 0; i < v.size() - 1; i++)
        {
            result += (v.at(i)) - (v.at(i + 1));
        }
    }
    return result;
}

//===================================
int arrayPlusArray(std::vector<int> a, std::vector<int> b)
{
    int result = 0;
    for (int num : a)
    {
        result += num;
    }

    for (int num : b)
    {
        result += num;
    }
    return result;
}
//===================================
std::string countSheep(int number)
{
    string result = "";
    for (int i = 1; i <= number; i++)
    {
        result += to_string(i) + " sheep...";
    }
    return result;
}
//===================================
bool feast(std::string beast, std::string dish)
{
    if (beast[0] == dish[0] && beast[beast.length() - 1] == dish[dish.length() - 1])
    {
        return true;
    }
    return false;
}
int main()

{
    vector<int> arr = {-2, -3, -1};
    cout << sumOfDifferences(arr);

    cout << "\n=============================\n";
    std::vector<int> a = {1, 2, 3};
    std::vector<int> b = {4, 5, 6};
    cout << arrayPlusArray(a, b);
    cout << "\n=============================\n";
    int number = 5;
    cout << countSheep(number);
    cout << "\n=============================\n";
    string beast = "marmot";
    string dish = "mulberry tart";
    cout << feast(beast, dish);
}