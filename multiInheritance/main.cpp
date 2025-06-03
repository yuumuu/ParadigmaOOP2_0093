#include <iostream>
using namespace std;

class Orang {
    public:
        int umur;

        Orang(int pUmur) : umur(pUmur) {
            cout << "Orang diberi umur " << umur << endl;
        }
};

class Pekerja : virtual public Orang {
    public:
        Pekerja(int pUmur) : Orang(pUmur) {
            cout << "Pekerja dibuat" << endl << endl;
        }
};

class Pelajar : virtual public Orang {
    public:
        Pelajar(int pUmur) : Orang(pUmur) {
            cout << "Pelajar dibuat" << endl;
        }
};