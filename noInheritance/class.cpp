#include <iostream>
using namespace std;

class Base final { // membatasi class Base
    public:
        virtual void perkenalan() {
            cout << "Halo, saya Function dari Base Class" << endl;
        }
};

class Base2 {
    public:
        virtual void perkenalan() {
            cout << "Halo, saya Function dari Base2 Class" << endl;
        }
};

class Derived : public Base2 {
    public:
        void perkenalan() {
            cout << "Halo, saya Function dari Derived Class" << endl;
        }
};

int main() {
    Derived a;
    a.perkenalan();

    return 0;
}