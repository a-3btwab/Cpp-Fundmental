#include <iostream>
using namespace std;

void calc(int nums[], int count)
{
    int result = 0;
    for (int i = 0; i < count; i++)
    {
        result += nums[i];
    }
    cout << "Result is: " << result << '\n';
}
int main()
{
    int countarr = 5;
    int arr[countarr]{};

    cout << "Enter 5 Numbers: ";
    for (int j = 0; j < 5; j++)
    {
        cin >> arr[j];
    }

    calc(arr, countarr);
    return 0;
}