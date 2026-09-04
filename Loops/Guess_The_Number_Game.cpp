#include <iostream>
using namespace std;
int main()
{
    int point = 0;
    int answers[3]{};
    int sequences[3][5]{
        {1, 5, 10, 16, 23},
        {2, 4, 8, 16, 32},
        {1, 1, 2, 3, 5}};

    cout << "Type the missing number in sequances: \n";
    cout << "Sequance 1\n";
    cout << " 1 | 5 | 10 | 16 | ?? \n";
    cin >> answers[0];
    if (answers[0] == 23)
    {
        point++;
    }
    cout << "Sequance 2\n";
    cout << " 2 | 4 | 8 | 16 | ?? \n";
    cin >> answers[1];
    if (answers[1] == 32)
    {
        point++;
    }
    cout << "Sequance 3\n";
    cout << " 1 | 1 | 2 | 3 | ??\n ";
    cin >> answers[2];
    if (answers[2] == 5)
    {
        point++;
    }
    cout << "Your Point is: " << point;
    return 0;
}