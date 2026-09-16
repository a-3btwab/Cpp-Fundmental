
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// count (From, To, the value)
// sort (From, To);
// reverse (From, To);
int main()
{
    // Count with iterator
    vector<int> nums{10, 500, 20, 8, 60, 20, -34, 100, 20};
    int val = 20;
    int counttimes = count(nums.begin(), nums.end(), val);
    cout << "Number " << val << " fount " << counttimes << " times\n";
    cout << "=====================================\n";
    for (int &n : nums)
    {
        cout << n << "\n";
    }
    cout << "=====================================\n";
    sort(nums.begin(), nums.end());
    for (int &n : nums)
    {
        cout << n << "\n";
    }
    cout << "=====================================\n";
    reverse(nums.begin(), nums.end());
    for (int &n : nums)
    {
        cout << n << "\n";
    }
    return 0;
}