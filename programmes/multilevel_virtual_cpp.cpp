#include <bits/stdc++.h>

using namespace std;

class base1 {
    public:
        virtual void speak() {
            cout << "base 1 speaking" << endl;
        }
};

class base2 : public base1 {
    public: 
        virtual void speak() {
            cout << "base 2 speaking" << endl;
        }
};

class derived: public base2 {
    public: 
        void speak() {
            cout << "derived speaking" << endl;
        }
};


int main () {
    // base class pointer pointing to derived class pointer
    base1 * bs1 = new base1();
    base2 * bs2 = new base2();
    derived * dr = new derived();

    bs1 = bs2;
    bs1->speak(); // prints base 2 speaks

    bs1 = dr;
    bs1->speak(); // prints derived speaking
    return 0;
}