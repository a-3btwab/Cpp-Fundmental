
#include <iostream>
#include <vector>
using namespace std;
// #include <iostream>
// vector <data_type> name{ , , }

int main()
{
    vector<int> nums{10, 20, 30, 40};
    cout << nums.at(3) << '\n'; // access
    cout << nums[3] << '\n';
    cout << nums.size() << '\n';
    nums.push_back(100); // add
    cout << nums.size() << '\n';
    cout << nums.at(3) << '\n';
    nums.at(3) = 100; // update
    cout << nums.at(3) << '\n';
    nums.pop_back(); // delete
    cout << nums.size() << '\n';
    return 0;
}