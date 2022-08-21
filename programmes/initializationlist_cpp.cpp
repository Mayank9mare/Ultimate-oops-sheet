#include <bits/stdc++.h>

using namespace std;

class base {
    int x,y,z;

    public:
        // base (int a, int b, int c): x(a),y(b),z(c) { // outputs 1 2 3
        //     cout << "constructor called" << endl;
        // }

        // base (int a, int b, int c): x(a),y(b+x),z(c+y) { // outputs 1 3 6
        //     cout << "constructor called" << endl;
        // }

        base (int a, int b, int c): x(a), z(c+x), y(b+z) { // y becomes garbage because the order of declaring the variables is x, y, z 
            cout << "constructor called" << endl;
        }

        void print() {
            cout << x << " " << y << " " << z << endl;
        }
};


int main () {

    base * bs1 = new base(1,2,3);
    bs1->print();

    return 0;
}