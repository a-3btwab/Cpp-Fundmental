
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
    vector<int>::iterator it = nums.begin();
    auto ita = nums.begin() + 1;
    cout << "first element is: " << *it++ << '\n';
    cout << "second element is: " << *ita << '\n';
    nums.erase(nums.begin(), nums.begin() + 2);
    cout << "first element after delete is: " << *nums.begin() << '\n';
    cout << "====================================================\n";
    vector<int> nums2{100, 200, 300, 400};
    vector<int>::iterator it2 = nums2.begin();
    vector<int>::iterator it2_last = nums2.end() - 1;
    cout << "first element is: " << *it2 << '\n';
    cout << "second element is: " << it2[1] << '\n';
    cout << "second element is: " << *(it2 + 1) << '\n';
    cout << "third element is: " << it2[2] << '\n';
    cout << "third element is: " << *(it2 + 2) << '\n';
    cout << "last element is: " << *it2_last << '\n';
    cout << "====================================================\n";
    vector<int> nums3{1000, 2000, 3000, 4000};
    vector<int>::iterator it3 = nums3.begin();
    advance(it3, 1);
    cout << "first element is: " << *it3 << '\n';
    advance(it3, 2);
    cout << "first element is: " << *it3 << '\n';
    advance(it3, -3);
    cout << "first element is: " << *it3 << '\n';

    return 0;
}