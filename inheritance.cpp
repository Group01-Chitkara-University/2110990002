#include <iostream>
using namespace std;

class Base{
    protected:
    int a, b;
    public:
    Base(){
        a = 0;
        b = 0;
    }
    void show const(){
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
    }
};

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

    void show const(){
        Base::show();
        cout << "c = " << c << endl;
        cout << "d = " << d << endl;
    }
};

int main(){
    Derived d;
    d.show();
    return 0;
}