#include <iostream>
#include <cstring>
using namespace std;
class triangle
{
private:
    float base;
    float height;

public:
    void setbase_height(float b, float h)
    {
        base = b;
        height = h;
    }

    //======================
    float area()
    {
        return .5 * base * height;
    }
    void print()
    {
        cout << "Base is: " << base << '\n'
             << "Height is: " << height << '\n'
             << "Area is: " << area() << '\n';
    }
};

int main()
{
    triangle x;
    x.setbase_height(50, 100);
    cout << x.area() << '\n';
    x.print();
}