#include <iostream>
using namespace std;

int main() {
    string bintang = "*";
    string teks = "";
    string spasi = " ";
    int count = 10;

    for (int i = 0; i < count; i++) {
        if (i < count)
            teks += bintang;
        cout << teks << endl;
    }
}