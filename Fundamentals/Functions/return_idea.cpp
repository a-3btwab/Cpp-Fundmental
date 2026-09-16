#include <iostream>
using namespace std;
int calc(int n1, int n2)
{
    cout << "Result is: ";

    return n1 + n2;
}

int main()
{
    int result = calc(10, 20);
    cout << result << '\n';
    cout << result * 5 << '\n';
    cout << result * 10;

    return 0;
}