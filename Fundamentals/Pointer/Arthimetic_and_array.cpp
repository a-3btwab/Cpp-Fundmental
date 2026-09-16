#include <iostream>
using namespace std;
int main()
{
    int nums[]{10, 20, 30, 40, 50};
    /**
    cout << nums << '\n';     // frist element memory address
    cout << *nums << '\n';    // frist element
    cout << &nums[0] << '\n'; // frist element memory address
    cout << nums[0] << '\n';  // frist element
    cout << "==============================\n";
    cout << nums + 1 << '\n';    // second element memory address
    cout << *(nums + 1) << '\n'; // second element
    cout << &nums[1] << '\n';    // second element memory address
    cout << nums[1] << '\n';     // second element
    **/
    int *ptr = nums;
    cout << *ptr << '\n'; // frist element
    cout << ptr << '\n';  // frist element memory address
    cout << "==============================\n";

    ptr++;
    cout << *ptr << '\n'; // second element
    cout << ptr << '\n';  // second element memory address

    cout << "==============================\n";

    ptr += 3;
    cout << *ptr << '\n'; // last element
    cout << ptr << '\n';  // last element memory address

    cout << "==============================\n";

    ptr--;
    cout << *ptr << '\n'; // before last element
    cout << ptr << '\n';  // before last element memory address
    return 0;
}