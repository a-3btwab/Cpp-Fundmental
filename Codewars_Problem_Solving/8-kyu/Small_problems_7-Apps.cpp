#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;
std::string abbrevName(std::string name)
{
    string result = "";
    result += toupper(name[0]);
    result += ".";

    for (int i = 0; i < name.length(); i++)
    {
        if (name[i] == ' ')
        {
            result += toupper(name[i + 1]);
            break;
        }
    }
    return result; // return it
}
//==========================================
std::string makeUpperCase(const std::string &str)
{
    string result = "";
    for (int i = 0; i < str.length(); i++)
    {
        result += toupper(str[i]);
    }
    return result;
}
//==========================================
bool check(const std::vector<std::string> &seq, const std::string &elem)
{
    for (int i = 0; i < seq.size(); i++)
    {
        if (seq[i] == elem)
        {
            return true;
        }
    }
    return false;
}
//==========================================
std::string switch_it_up(int number)
{

    switch (number)
    {
    case 0:
        return "Zero";
        break;
    case 1:
        return "One";
        break;
    case 2:
        return "Two";
        break;
    case 3:
        return "Three";
        break;
    case 4:
        return "Four";
        break;
    case 5:
        return "Five";
        break;
    case 6:
        return "Six";
        break;
    case 7:
        return "Seven";
        break;
    case 8:
        return "Eight";
        break;
    case 9:
        return "Nine";
        break;
    default:
        return "";
        break;
    }
}
//=============================
/**If one of the flowers has an even number
 * of petals and the other has an odd number
 * of petals it means they are in love. */
bool lovefunc(int f1, int f2)
{

    return (f1 % 2 == 0 && f2 % 2 == 0) || (f1 % 2 != 0 && f2 % 2 != 0) ? false : true;
}

int main()

{
    string name = "Seif Abdo";

    cout << abbrevName(name);
    cout << "\n=========================\n";
    string str = "abdelrahman";
    cout << makeUpperCase(str);
    cout << "\n=========================\n";
    vector<string> seq = {"a", "b", "d"};
    string elem = "d";
    cout << check(seq, elem);
    cout << "\n=========================\n";
    int number = 3;
    cout << switch_it_up(number);
    cout << "\n=========================\n";
    int f1 = 4;
    int f2 = 5;
    cout << lovefunc(f1, f2);

    return 0;
}