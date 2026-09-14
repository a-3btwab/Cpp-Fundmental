
#include <iostream>
#include <vector>
using namespace std;
// #include <iostream>
// vector <data_type> name{ , , }
// vector<int>::iterator it = nums.begin();
// auto ita = nums.begin() + 1;

int main()
{
    vector<int> nums{10, 20, 30, 40};
    vector<int>::iterator it;
    cout << "====================================\n";
    // Ranged loop with iterator
    /**A Range-based for loop is the simplest way to iterate through all elements of a
     container to perform an operation—like printing, updating, or aggregating—without
     managing indices or iterators manually. */
    for (int val : nums)
    {
        cout << val << '\n';
    }
    cout << "====================================\n";
    for (int val : nums)
    {
        val *= 2;
        cout << val << '\n';
    }
    cout << "====================================\n";
    int nums2[]{100, 200, 300, 400};
    for (int val2 : nums2)
    {
        cout << val2 << '\n';
    }
    return 0;
}