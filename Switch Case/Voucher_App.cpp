#include <iostream>
using namespace std;
int main()
{
    int voucher;
    cout << "Enter Your Voucher: ";
    cin >> voucher;
    switch (voucher)
    {
    case 5423695:
        cout << "Congratulations You Won a Car";
        break;
    case 4783325:
    case 6585425:
    case 2254484:
        cout << "Congratulations You Won a Iphone";
        break;

    case 785144:
    case 985462:
    case 138455:
    case 644287:
    case 865144:
    case 325144:
        cout << "Congratulations You Won a Keyboard";
        break;
    default:
        cout << "Sorry Better Luck Next Time";
    }
    return 0;
}