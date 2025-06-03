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

class Lia : public Seseorang {
    public:
        void pesan() {
            cout << "Pesan dari Lia" << endl;
        }
};

int main() {
    Seseorang *objek;
    Joko a;
    Lia b;

    objek = &a;
    objek->pesan();
    objek = &b;
    objek->pesan();
    
    a.Seseorang::pesan();

    return 0;
}