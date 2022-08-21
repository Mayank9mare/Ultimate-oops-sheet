#include <bits/stdc++.h>

using namespace std;

class base1 {
    int x;
    public:

        base1() { x = 0; }

        base1(int x) { this->x = x; }

        void show() { 
            cout << x << endl;
        }

    protected:

        void set(int y) { x = y; }
};

class base2: public base1 {
    int z;
    public:

        base2() { z = 0;}

        base2(int z, int x): base1(x) { this->z = z; }

        void show() { 
            cout << z << endl;
        }

    protected:

        void set(int y) { z = y; }
};

class derived: public base2{
    public:
        derived(int x, int y): base2(x,y) {}
        void show_xy() { // again use resolution operator to call functions from different classes
            show(); // call base2 class show
            base1 :: show(); // call base1 class show
             
        }
};

int main() {
    derived * der = new derived(3,4);
    der->show_xy();

    // 3
    // 4

    return 0;
}