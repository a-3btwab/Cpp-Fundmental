#include <iostream>
using namespace std;
int main()
{
    int nums[]{10, 20, 30, 40};
    int *ptr = &nums[0];
    cout << "Frist element is: \n\n";
    cout << "Value with index: " << nums[0] << '\n';
    cout << "Value with pointer: " << *ptr << '\n';
    cout << "Address with index: " << &nums[0] << '\n';
    cout << "Address with pointer: " << ptr << "\n\n";
    cout << "=======================================\n";

    cout << "Second element is: \n\n";
    cout << "Value with index: " << nums[1] << '\n';
    cout << "Value with pointer: " << *(ptr + 1) << '\n';
    cout << "Address with index: " << &nums[1] << '\n';
    cout << "Address with pointer: " << ptr + 1 << "\n\n";
    cout << "=======================================\n";

    cout << "Third element is: \n\n";
    cout << "Value with index: " << nums[2] << '\n';
    cout << "Value with pointer: " << *(ptr + 2) << '\n';
    cout << "Address with index: " << &nums[2] << '\n';
    cout << "Address with pointer: " << ptr + 2 << "\n\n";
    cout << "=======================================\n";
    cout << "Forth element is: \n\n";
    cout << "Value with index: " << nums[3] << '\n';
    cout << "Value with pointer: " << *(ptr + 3) << '\n';
    cout << "Address with index: " << &nums[3] << '\n';
    cout << "Address with pointer: " << ptr + 3 << "\n\n";
    return 0;
}