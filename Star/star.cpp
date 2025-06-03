#include <iostream>
using namespace std;

class Segitiga {
    protected:
        string bintang = "*";
        string teks = "";
        string spasi = " ";
};

class SamaKaki : public Segitiga {
    public:
        void create(int tinggi) {
            for (int i = 1; i <= tinggi; i++) {
                for (int j = 1; j <= tinggi - i; j++) {
                    spasi += " ";
                }
                for (int k = 1; k <= 2 * i - 1; k++) {
                    bintang += "*";
                }
                teks = spasi + bintang;
                cout << teks << endl;
                spasi = "";
                bintang = "";
            }
        }
};

int main() {
    SamaKaki segitiga;
    segitiga.create(5);
    return 0;
}