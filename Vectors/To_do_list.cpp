
#include <iostream>
#include <vector>
#include <string>
using namespace std;
// #include <iostream>
// vector <data_type> name{ , , }

int main()
{
    vector<string> tasks;
    int i = 0;
    while (true)
    {
        string input;
        cout << "Enter a task to do: \n";
        getline(cin, input);

        if (input == "Exit" || input == "exit")
        {
            cout << "Your tasks today are: \n";
            for (int j = 0; j < tasks.size(); j++)
            {
                cout << tasks.at(j) << '\n';
            }
            break;
        }
        else
        {

            tasks.push_back(input);
        }
    }
    return 0;
}