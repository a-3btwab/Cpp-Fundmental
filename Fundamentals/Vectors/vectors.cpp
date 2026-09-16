
#include <iostream>
#include <vector>
using namespace std;
// #include <iostream>
// vector <data_type> name = { , , }
int main()
{
    vector<int> numsone = {10, 20, 30, 40, 50};
    vector<int> numstwo{100, 200, 300, 400, 500};
    vector<int> numsthree(4, 50);
    for (int i = 0; i < numsone.size(); i++)
    {
        cout << numsone.at(i) << ' ';
    }
    cout << "\n=========================\n";

    for (int i = 0; i < numstwo.size(); i++)
    {
        cout << numstwo.at(i) << ' ';
    }
    cout << "\n=========================\n";

    for (int i = 0; i < numsthree.size(); i++)
    {
        cout << numsthree.at(i) << ' ';
    }
    cout << "\nnumber of element: " << numsthree.size();

    cout << "\n=========================\n";
    numsthree.push_back(1000);
    numsthree.at(0) = 99;

    for (int i = 0; i < numsthree.size(); i++)
    {
        cout << numsthree.at(i) << ' ';
    }
    cout << "\nnumber of element: " << numsthree.size();

    cout << "\n====================================\n";
    vector<string> names = {"ali", "abdo", "seif"};
    cout << names.at(1);

    return 0;
}