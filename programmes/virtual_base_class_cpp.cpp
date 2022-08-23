#include <bits/stdc++.h>

using namespace std;

class base1 {
    public:
        void speak() {
            cout << "base 1 is speaking" << endl;
        }
};

class base2: virtual public base1 {
    public:
        void tell() {
            cout << "base2 is telling" << endl;
        }

        void speak() { // now speak will call this speak function
            cout << "base2 is speaking" << endl;
        }
};

class base3: virtual public base1 {
    public:
        void tell() {
            cout << "base3 is telling" << endl;
        }
};

class base4:public base2, public base3 {
    public:
        void chill() {
            cout << "base4 is chilling" << endl;
        }
        void tell () {
            base2:: tell();
        }
};


int main () {
    base4 * bs4 = new base4();
    bs4->speak();
    return 0;
}