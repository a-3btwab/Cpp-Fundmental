#include <iostream>
#include <cstring>
using namespace std;
class students
{
private:
    string name;
    string branchofcollege;
    int id;
    float gpa;

public:
    void setname(string n)
    {
        name = n;
    }
    void setbranch(string n)
    {
        branchofcollege = n;
    }
    void setid(int n)
    {
        id = n;
    }
    void setgpa(float n)
    {
        gpa = n;
    }
    //=================================
    void print()
    {
        cout << "Student Name is: " << name << '\n'
             << "Branch is: " << branchofcollege << '\n'
             << "Id is: " << id << '\n'
             << "GPA is: " << gpa;
    }
};

int main()
{
    students x;
    x.setname("Abdelrahman Abdeltawab");
    x.setbranch("Zayed Campus");
    x.setid(37678236);
    x.setgpa(3.28);
    x.print();
    cout << "\n============================\n";
    students y;
    y.setname("Seif Fares");
    y.setbranch("Zayed Campus");
    y.setid(201443565);
    y.setgpa(3.22);
    y.print();
    students z;
    cout << "\n============================\n";
    z.setname("Abdelmajeed Hamdy");
    z.setbranch("Zayed Campus");
    z.setid(202345789);
    z.setgpa(3.1);
    z.print();
}
