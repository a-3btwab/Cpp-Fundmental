#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;
string people_with_age_drink(int age)
{
    return age < 14 ? "drink toddy" : age < 18 ? "drink coke"
                                  : age < 21   ? "drink beer"
                                               : "drink whisky";
}
//=============================
// each dragon takes 2 bullets to be defeated
bool hero(int bullets, int dragons)
{

    return dragons * 2 <= bullets ? true : false;
}
//=============================
/*S is misinterpreted as 5
O is misinterpreted as 0
I is misinterpreted as 1*/
string correct(string str)
{
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '5')
        {
            str[i] = 's';
        }
        else if (str[i] == '1')
        {
            str[i] = 'I';
        }
        else if (str[i] == '0')
        {
            str[i] = 'o';
        }
    }
    return str;
}
//=============================
std::string rps(string p1, string p2)
{

    string draw = "Draw!";
    string p1win = "Player 1 won!";
    string p2win = "Player 2 won!";

    if (p1 == p2)
    {
        return draw;
    }
    else if (p1 == "rock")
    {
        if (p2 == "scissors")
            return p1win;
        if (p2 == "paper")
            return p2win;
    }
    else if (p1 == "scissors")
    {
        if (p2 == "rock")
            return p2win;
        if (p2 == "paper")
            return p1win;
    }
    else if (p1 == "paper")
    {
        if (p2 == "scissors")
            return p2win;
        if (p2 == "rock")
            return p1win;
    }

    return "bad input";
}
//===============================
char get_char_from_ASCII(int i)
{
    return char(i);
}
int main()

{
    int age = 18;
    cout << people_with_age_drink(age);
    cout << "\n==========================\n";
    int bullets = 100;
    int dragons = 40;
    cout << hero(bullets, dragons);
    cout << "\n==========================\n";
    string str = "1F-RUDYARD K1PL1NG (5,1,0)";
    cout << correct(str);
    cout << "\n==========================\n";
    string p1 = "scissors";
    string p2 = "paper";
    cout << rps(p1, p2);
    cout << "\n==========================\n";
    int i = 65;
    cout << get_char_from_ASCII(i);
}