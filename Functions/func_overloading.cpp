
#include <iostream>
using namespace std;

void print(int a, int b)
{
    cout << "Number one is: " << a << '\n';
    cout << "Number tow is: " << b << '\n';
    cout << "======================================\n";
}
void print(int a, int b, int c)
{
    cout << "Number one is: " << a << '\n';
    cout << "Number two is: " << b << '\n';
    cout << "Number three is: " << c << '\n';
    cout << "======================================\n";
}
void print(string a, string b)
{
    cout << "Text one is: " << a << '\n';
    cout << "Text two is: " << b << '\n';
    cout << "======================================\n";
}
void print(string a, int b)
{
    cout << "text one is: " << a << '\n';
    cout << "Number one is: " << b << '\n';
    cout << "======================================\n";
}
// The function will be selected based on the input parameter.
int main()
{
    print("Ali", "Abdo");
    print(5, 8);
    print("Abdo", 8);
    print(5, 8, 7);

    return 0;
}