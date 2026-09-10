
#include <iostream>
using namespace std;
// Like (for loop) but by function

int add(int num)
{
    if (num == 0) // == (i<=0)
    {
        return 0;
    }

    cout << num;
    cout << "\n===========================\n";
    return num + add(num - 1); // add(num - 1)==(i--)
}

// 5+add(4)
// 5+(4+add(3))
// 5+(4+3)+add(2))
// 5+(4+3+2)+add(1))

int main()
{
    cout << add(5); // 5==(int i=5)
    return 0;
}