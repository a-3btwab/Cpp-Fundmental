#include <iostream>
using namespace std;
int main()
{
    int *ptr1; // wild pointer
    int *ptr2 = NULL;
    int *ptr3 = NULL;
    cout << ptr1 << '\n'; // Garbage value
    cout << ptr2 << '\n'; // 0
    cout << ptr3 << '\n'; // 0

    int a = 100;
    void *ptr = &a;
    /**
     cout << ptr << '\n';
     cout << *ptr << '\n';    ERROR
 **/
    // C-style

    // cout << *(int *)ptr << '\n';

    // Modern
    cout << *static_cast<int *>(ptr) << '\n';
    return 0;
}