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

class Budi : public Pekerja, public Pelajar {
    public:
        Budi(int pUmur) : Pekerja(pUmur), Pelajar(pUmur), Orang(pUmur) {
            cout << "Budi dibuat" << endl;
        }
};

int main() {
    Budi a(12);

    return 0;
}