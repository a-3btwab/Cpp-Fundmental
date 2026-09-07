#include <iostream>
using namespace std;
int main()
{
    int vals[5]{};
    cout << "Enter 5 valuse to reverse: ";
    for (int i = 4; i >= 0; i--)
    {
        cin >> vals[i];
    }
    cout << "Values after reverse\n";
    for (int j = 0; j < 5; j++)
        cout << vals[j] << "  ";
    return 0;
}
