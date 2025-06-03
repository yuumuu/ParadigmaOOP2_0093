#include <iostream>
using namespace std;

class Base {
    public:
        virtual void perkenalan() {
            cout << "Halo, saya Function dari Base Class" << endl;
        }
};

class Derived : public Base {
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