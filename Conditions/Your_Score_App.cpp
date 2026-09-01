/**
========================
======Solution_One======
========================
**/
#include <iostream>
using namespace std;
int main()
{
    string grade;
    int point;
    cout << "Enter your point: ";
    cin >> point;
    if (point >= 97)
        grade = "A+";
    else if (point >= 90)
        grade = "A";
    else if (point >= 87)
        grade = "B+";
    else if (point >= 80)
        grade = "B";
    else if (point >= 77)
        grade = "C+";
    else if (point >= 70)
        grade = "C";
    else if (point >= 50)
        grade = "D";
    else
    {
        grade = "F";
    }

    cout << "You Grade is: " << grade;
    return 0;
}

/**
========================
======Solution_Two======
========================

#include <iostream>
using namespace std;
int main()
{
    int point;
    cout << "Enter your point: ";
    cin >> point;
    if (point >= 97)
        cout << "Your Grade is: A+";
    else if (point >= 90)
        cout << "Your Grade is: A";
    else if (point >= 87)
        cout << "Your Grade is: B+";
    else if (point >= 80)
        cout << "Your Grade is: B";
    else if (point >= 77)
        cout << "Your Grade is: C+";
    else if (point >= 70)
        cout << "Your Grade is: C";
    else if (point >= 50)
        cout << "Your Grade is: D";
    else
        cout << "Your Grade is: F";
    return 0;
}**/