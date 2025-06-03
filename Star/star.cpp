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
        void create(int t) {
            for (int i = 0; i < t; i++) {
                
            }
        }
};

int main() {
    SamaKaki segitiga;
    segitiga.create(10);
    return 0;
}