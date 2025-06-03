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