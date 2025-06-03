#include <iostream>
using namespace std;

class RemoteLampu {
    private:
        string saklar[10];
    public:
        void setSaklar(int i, string value) {
            saklar[i] = value;
        }
        string getSaklar(int i) {
            return saklar[i];
        }
};

int main() {
    RemoteLampu lampu;

    lampu.setSaklar(0, "Lampu Teras Rumah");
    lampu.setSaklar(1, "Lampu Ruang Tamu");
    lampu.setSaklar(2, "Lampu Kamar Tidur");
    lampu.setSaklar(3, "Lampu Dapur");

    cout << "Saklar 0: " << lampu.getSaklar(0) << endl;
    cout << "Saklar 1: " << lampu.getSaklar(1) << endl;
    cout << "Saklar 2: " << lampu.getSaklar(2) << endl;
    cout << "Saklar 3: " << lampu.getSaklar(3) << endl;

    return 0;
}