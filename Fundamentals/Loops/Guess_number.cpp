#include <iostream>
using namespace std;
int main()
{
    int guass = 0;
    int guass_number = 7;
    int guass_tries = 0;
    cout << "Enter number between 1-10: ";
    while (true)
    {
        cin >> guass;
        guass_tries++;

        if (guass == guass_number)
        {
            cout << "Great, You are won";
            break;
        }
        if (guass_tries == 3)
        {
            cout << "Sorry, You are Faild this number is: " << guass_number;
            break;
        }
        else
        {
            cout << "Sorry, Please trie again: ";
        }
    }

    return 0;
}