#include <iostream>
using namespace std;
int main()
{
    int num = 100;
    int *ptr = &num;
    cout << "value: " << num << '\n';
    cout << "address: " << &num << '\n';
    cout << "address by pointer: " << ptr << '\n';
    cout << "value by pointer: " << *ptr << '\n';
    cout << "====================================\n";
    *ptr = 200;
    cout << "value: " << num << '\n';
    cout << "address: " << &num << '\n';
    cout << "address by pointer: " << ptr << '\n';
    cout << "value by pointer: " << *ptr << '\n';
    return 0;
}