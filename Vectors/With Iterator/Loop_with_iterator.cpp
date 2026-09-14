
#include <iostream>
#include <vector>
using namespace std;
// #include <iostream>
// vector <data_type> name{ , , }
// vector<int>::iterator it = nums.begin();
// auto ita = nums.begin() + 1;

int main()
{
    // vector<int>::iterator it = nums.begin();
    // Loop with iterator
    vector<int> nums{10, 20, 30, 40};
    vector<int>::iterator it;
    for (it = nums.begin(); it < nums.end(); ++it)
    {
        cout << *it << '\n';
    }

    return 0;
}