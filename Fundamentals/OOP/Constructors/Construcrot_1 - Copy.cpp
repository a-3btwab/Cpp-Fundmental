#include <iostream>
#include <cstring>
using namespace std;
class triangle
{
private:
    float base;
    float height;

public:
    /*A Constructor is a special function inside a class
     that runs automatically whenever a new object
     is created,used primarily to initialize
     the object's variables with starting values.*/

    triangle() // Empty constructor <---------------------+-<
    {
        base = 0;
        height = 0;
        cout << "first constructor\n";
    }
    triangle(float b, float h) // Parametarise constructor <--------------------+-<
    {
        base = b;
        height = h;
    }
    void set_b_h(float b, float h)
    {
        base = b;
        height = h;
    }
    //=====================
    float area()
    {
        return .5 * base * height;
    }
    void print()
    {
        cout << "Base is: " << base << '\n'
             << "Height is: " << height << '\n'
             << "Area is: " << area() << "\n\n";
    }
};

int main()
{
    triangle op1(5, 10), op2;
    op1.print();
    op2.print();
    // to edit the defult values or set new values use set function
    op1.set_b_h(50, 38);
    op1.print();
    op2.set_b_h(34, 60);
    op2.print();
}