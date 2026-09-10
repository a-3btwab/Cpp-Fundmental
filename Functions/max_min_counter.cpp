#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    cout << min(10, 20) << '\n';                       // 10
    cout << min(30, 15) << '\n';                       // 15
    cout << min('a', 'C') << '\n';                     // C
    cout << min({100, 20, -50, 300, -55, 40}) << '\n'; // 55
    /*=============================================*/
    // find min number

    int arr[]{100, 20, -50, 300, -64, 40};
    int arrsize = size(arr);
    int checknum = 0;
    for (int i = 0; i < arrsize; i++)
    {
        if (arr[i] < checknum)
        {
            checknum = arr[i];
        }
    }
    cout << checknum << "   <---\n";
    /*=============================================*/
    cout << max(10, 12) << '\n';                       // 12
    cout << max(30, 15) << '\n';                       // 30
    cout << max('a', 'C') << '\n';                     // a
    cout << max({100, 20, -50, 300, -55, 40}) << '\n'; // 300
    /*=============================================*/
    // find max number

    int arr2[]{100, 20, -50, 135, -55, 40};
    int arrsize2 = size(arr);
    int checknum2 = 0;
    for (int i = 0; i < arrsize; i++)
    {
        if (arr2[i] > checknum2)
        {
            checknum2 = arr2[i];
        }
    }
    cout << checknum2 << "   <---\n";
    /*=============================================*/
    // find count numbr accurance

    int arr3[]{1, 2, 7, 2, 6, 4, 8, 2, 4, 2};
    int arrsize3 = size(arr3);
    int counter = 0;
    int choosenum = 2;
    for (int i = 0; i < arrsize3; i++)
    {
        if (arr3[i] == choosenum)
        {
            counter++;
        }
    }
    cout << choosenum << " found " << counter << " times in array  <---\n";

    return 0;
}