#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;
int mango(int quantity, int price)
{
    int freebies = quantity / 3;
    return (quantity - freebies) * price;
}
int quarter_of_year(int month)
{
    return month <= 3 ? 1 : month <= 6 ? 2
                        : month <= 9   ? 3
                        : month <= 12  ? 4
                                       : 0;
}
//=================================================
vector<int> invert(vector<int> values)
{
    for (int i = 0; i < values.size(); i++)
    {
        values.at(i) *= (-1);
    }
    return values;
}
//=================================================
string removeExclamationMarks(string str)
{
    string result = "";
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] != '!')
            result += str[i];
    }
    return result;
}
//=================================================

int min(vector<int> list)
{
    int minval = list[0];
    for (int i = 0; i < list.size(); i++)
    {
        if (list[i] <= minval)
            minval = list[i];
    }
    return minval;
}

int max(vector<int> list)
{
    int maxval = list[0];
    for (int i = 0; i < list.size(); i++)
    {
        if (list[i] >= maxval)
            maxval = list[i];
    }
    return maxval;
}
//=================================================
int litres(double time)
{
    int litre = 0;
    litre = floor(time * (.5));
    return litre;
}
int main()
{
    int quantity = 10;
    int price = 5;
    cout << mango(quantity, price);
    cout << "\n===============================\n";
    int month = 4;
    cout << quarter_of_year(month);
    cout << "\n===============================\n";
    vector<int> values{1, -3, 76, -100, 15};
    for (int num : invert(values))
    {
        cout << num << "  ";
    }
    cout << "\n===============================\n";
    string str = "Hi!! Ali!!";
    cout << removeExclamationMarks(str);
    cout << "\n===============================\n";
    vector<int> list = {-52, 56, 30, 29, -54, 0, -110};
    cout << min(list) << '\n';
    cout << max(list);
    cout << "\n===============================\n";
    double time = 5;
    cout << litres(time);
}