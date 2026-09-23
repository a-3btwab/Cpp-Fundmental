#include <iostream>
#include <cstring>
using namespace std;
class students
{
private:
    string name;
    int id;
    float gpa;

public:
    students(string s, int i, float g)
    {
        name = s;
        id = i;
        gpa = g;
    }
    void print()
    {
        cout << "Name: " << name << '\n'
             << "ID: " << id << '\n'
             << "GPA: " << gpa << "\n\n";
    }
};
int main()
{
    students s1("Abdelrahman Abdeltawab", 202507366, 3.28);
    s1.print();
    students s2("Abdelmajeed Hamdy", 209876378, 3.1);
    s2.print();
    students s3("Seif Fares", 283924798, 3.2);
    s3.print();
}