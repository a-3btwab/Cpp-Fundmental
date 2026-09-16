#include <iostream>
using namespace std;
int main()
{
    float age;

    cout << "================================\n";
    cout << "=====Calculate Your Age App=====\n";
    cout << "================================\n";
    cout << "Enter your age please: ";
    cin >> age;
    cout << "Your age in days: " << age * 365 << " Day\n";
    cout << "Your age in hour: " << (age * 365) * 24 << " Hour";

    return 0;
}