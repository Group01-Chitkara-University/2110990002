#include <iostream>
using namespace std;

// base class
class Base{
    protected:
    int a, b;
    public:
    Base(){
        a = 0;
        b = 0;
    }
    void show()const{
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
    }
};

// Multiple inheritance 
// is private by default if no access specifier is specified
class Derived : public Base{
    protected:
    int c, d;
    public:
    Derived(){
        a = 1;
        b = 2;
        c = 3;
        d = 4;
    }

    void show() const{
        Base::show();       // to avoid the naming confusion
        cout << "c = " << c << endl;
        cout << "d = " << d << endl;
    }
};

int main(){
    Derived d;
    d.show();
    return 0;
}