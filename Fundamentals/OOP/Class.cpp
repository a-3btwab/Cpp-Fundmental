#include <iostream>
#include <cstring>
using namespace std;

class car
{
private:
    string name = "";
    string color = "";
    int maxspeed;
    int model;

public:
    void setname(string n)
    {
        name = n;
    }
    void setcolor(string n)
    {
        color = n;
    }
    void setmaxspeed(int n)
    {
        maxspeed = n;
    }
    void setmodel(int n)
    {
        model = n;
    }
    //=====================

    string getname()
    {
        return name;
    }
    string getcolor()
    {
        return color;
    }
    int getmaxspeed()
    {
        return maxspeed;
    }
    int getmodel()
    {
        return model;
    }
    //====================
    void print()
    {
        cout << "Name is: " << name << '\n'
             << "Color is: " << color << '\n'
             << "Maxspeed is: " << maxspeed << '\n'
             << "Model is: " << model << '\n';
    }
};
int main()
{
    car x;
    x.setname("BMW");
    x.setcolor("Red");
    x.setmaxspeed(300);
    x.setmodel(2025);
    x.print();
    cout << "\n================================\n";
    car y;
    x.setname("BMW");
    x.setcolor("Blue");
    x.setmaxspeed(280);
    x.setmodel(2020);
    x.print();
    cout << "\n================================\n";
    car z;
    x.setname("BMW");
    x.setcolor("Black");
    x.setmaxspeed(310);
    x.setmodel(2026);
    x.print();
}