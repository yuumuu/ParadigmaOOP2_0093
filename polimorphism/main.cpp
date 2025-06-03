#include <iostream>
using namespace std;

class Seseorang {
    public:
        // virtual void pesan() = 0; // pure virtual function
        virtual void pesan() {
            cout << "Pesan dari Seseorang" << endl;
        }
};

class Joko : public Seseorang {
    public:
        void pesan() {
            cout << "Pesan dari Joko" << endl;
        }
};