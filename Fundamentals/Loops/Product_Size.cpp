#include <iostream>
using namespace std;
int main()
{
    string product[]{"item_1", "item_2", "item_3"};
    string size[]{"L", "XL", "XXL"};
    for (int i = 0; i < 3; i++)
    {
        cout << product[i] << "\n";
        for (int j = 0; j < 3; j++)
        {
            cout << size[j] << "\n";
        }
    }
    return 0;
}