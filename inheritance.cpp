#include <iostream>
using namespace std;

// base class
class Base
{
protected:
    int a, b;

public:
    Base()
    {
        a = 0;
        b = 0;
    }
    void show() const
    {
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
    }
};

// Multiple inheritance
// is private by default if no access specifier is specified
class Derived : public Base
{
protected:
    int c, d;

public:
    Derived()
    {
        a = 1;
        b = 2;
        c = 3;
        d = 4;
    }

    void show() const
    {
        Base::show(); // to avoid the naming confusion
        cout << "c = " << c << endl;
        cout << "d = " << d << endl;
    }
};

// Calculator using template
template <class T, class U = float>

class Calculator
{
    T x;
    U y;

public:
    void set()
    {
        cout << "X: ";
        cin >> x;
        cout << "Y: ";
        cin >> y;
    }

    void sum()
    {
        cout << "Sum: " << x + y << endl;
    }
    void sub()
    {
        cout << "Sub: " << x - y << endl;
    }
    void mul()
    {
        cout << "Mul: " << x * y << endl;
    }
    void div()
    {
        cout << "Div: " << x / y << endl;
    }
};

int main()
{
    Derived d;
    d.show();

    Calculator<int, float> obj1;
    obj1.set();
    cout << "******************" << endl;
    obj1.sum();
    return 0;
}
// We have completed inheretance.