
#include <iostream>
#include <vector>
using namespace std;
// #include <iostream>
// vector <data_type> name = { , , }

void calc(vector<int> numsvec)
{
    int result = 0;
    for (int i = 0; i < numsvec.size(); i++)
    {
        result += numsvec[i];
    }
    cout << result;
}
int main()
{
    vector<int> arr = {10, 20, 30, 40, 100, 300};
    int sizearr = 0;
    calc(arr);
    return 0;
}