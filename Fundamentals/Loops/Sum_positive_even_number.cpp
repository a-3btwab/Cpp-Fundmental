#include <iostream>
using namespace std;
int main()
{
    int i = 0;
    int sum = 0;
    int nums[]{10, -5, 13, 0, 7, 4};
    for (; i < 6; i++)
    {
        if ((nums[i] % 2 == 0) && (nums[i] > 0))
        {
            sum += nums[i];
        }
    }

    cout << "Sum of positive even number is: " << sum;

    return 0;
}
