#include <iostream>
using namespace std;

void icebox(string item)
{
    if (item == "Cocacola")
    {
        cout << item << " It will be more cold\n";
    }
    else if (item == "Apple")
    {
        cout << item << " It will be more fresh\n";
    }
    else if (item == "Juice")
    {
        cout << item << " It will be more goog\n";
    }
    else
    {
        cout << item << " is invalid";
    }
}
int main()
{
    icebox("Cocacola");
    icebox("Apple");
    icebox("Juice");
    icebox("ese");
    return 0;
}
