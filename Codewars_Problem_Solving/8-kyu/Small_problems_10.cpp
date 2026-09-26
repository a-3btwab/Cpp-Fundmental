#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;
vector<int> countBy(int x, int n)
{

    vector<int> result = {};
    for (int i = 1; i <= n; i++)
    {
        result.push_back(i);
    }
    for (int j = 0; j < result.size(); j++)
    {
        result.at(j) *= x;
    }
    return result;
}
//=======================
string number_to_string(int num)
{
    string n = to_string(num);
    return n;
}
//=======================
string twoSort(vector<string> s)

{
    sort(s.begin(), s.end());
    string word = s.at(0);
    string result = "";
    for (int i = 0; i < word.length(); i++)
    {
        if (i != (word.length() - 1))
        {
            result += word[i];
            result += "***";
        }
        else
            result += word[i];
    }
    return result;
}
//=======================
vector<int> reverseSeq(int n)
{
    vector<int> seq = {};
    for (int i = n; i > 0; i--)
    {
        seq.push_back(i);
    }
    return seq;
}
//=======================
int sum_without_highest_lowest(vector<int> numbers)
{
    int result = 0;
    sort(numbers.begin(), numbers.end());
    for (int i = 1; i < numbers.size(); i++)
    {
        if (i != (numbers.size() - 1))
        {
            result += numbers.at(i);
        }
    }
    return result;
}
//=======================
int combat(int health, int damage)
{

    if (damage >= health)
    {
        return 0;
    }
    else
        return health - damage;
}
//=======================
int findSmallest(vector<int> list)
{

    return *min_element(list.begin(), list.end());
}

int main()

{
    int x = 5;
    int n = 10;
    for (int z : countBy(x, n))
        cout << z << '\n';
    cout << "=============================\n";
    int num = 345;
    cout << number_to_string(num);
    cout << "\n=============================\n";
    vector<string> s = {"take", "bitcoin", "over", "the", "world", "maybe", "who", "knows", "perhaps"};
    cout << twoSort(s);
    cout << "\n=============================\n";
    int n2 = 5;
    for (int z : reverseSeq(n2))
        cout << z << '\n';
    cout << "\n=============================\n";
    vector<int> numbers = {6, 2, 1, 8, 10};
    cout << sum_without_highest_lowest(numbers);
    cout << "\n=============================\n";
    int health = 20;
    int damage = 30;
    cout << combat(health, damage);
    cout << "\n=============================\n";
    vector<int> list = {17, 21, 15, 36, 96};
    cout << findSmallest(list);
}
