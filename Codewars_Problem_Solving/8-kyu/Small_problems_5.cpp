#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

int count_sheep(vector<bool> arr)
{
    /**int count = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr.at(i) == true)
        {
            count++;
        }
    }
    return count;*/
    return count(arr.begin(), arr.end(), true);
}

//==================================
int square_sum(const std::vector<int> &numbers)
{
    int result = 0;
    for (int i = 0; i < numbers.size(); i++)
    {
        result += pow(numbers.at(i), 2);
    }
    return result;
}
//==================================
int odd_count(int n)
{
    return n / 2;
}
//==================================
int getRealFloor(int f)
{
    int result = 0;
    if (f <= 0)
    {
        return result = f;
    }
    else if (f > 0 && f <= 13)
    {
        return result = (f - 1);
    }
    else
    {
        return result = (f - 2);
    }
}
//==================================
double calc_average(const std::vector<double> &values)
{
    if (values.empty())
    {
        return 0;
    }

    double sum = 0;
    for (double val : values)
    {
        sum += val;
    }

    return sum / values.size();
}
//==================================
int makeNegative(int num)
{
    int result = 0;
    return num <= 0 ? result = num : result = (num * (-1));
}
int main()

{
    vector<bool> arr = {true, true, true, false,
                        true, true, true, true,
                        true, false, true, false,
                        true, false, false, true,
                        true, true, true, true,
                        false, false, true, true};
    cout << count_sheep(arr);
    cout << "\n===========================\n";
    vector<int> numbers = {1, 2, 2};
    cout << square_sum(numbers);
    cout << "\n===========================\n";
    int n = 15;
    cout << odd_count(n);
    cout << "\n===========================\n";
    int f = 13;
    cout << getRealFloor(f);
    cout << "\n===========================\n";
    vector<double> values{10, 20, 30, 40, 50};
    cout << calc_average(values);
    cout << "\n===========================\n";
    int num = 2;
    cout << makeNegative(num);
}