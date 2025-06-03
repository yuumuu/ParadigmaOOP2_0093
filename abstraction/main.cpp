#include <iostream>
using namespace std;

class Abstraksi {
    private: string x, y;
    public:
        // method untuk mengisi nilai
        // private member
        void setVar(string a, string b) {
            x = a;
            y = b;
        }
        // menampilkan nilai
        void display() {
            cout << "x = " << x << endl;
            cout << "y = " << y << endl;
        }
};

int main() {
    Abstraksi obj;
    obj.setVar("Yogyakarta", "Kampus");
    obj.display();
    
    return 0;
}