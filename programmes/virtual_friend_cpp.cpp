#include <bits/stdc++.h>

using namespace std;

// forward declaration

class base1;

class base2 {
    public:
        virtual base1 * add_two_base1(base1 *, base1 *);
};

class derived: public base2 {
    public:
        base1 * add_two_base1(base1 *, base1 *);
};

class base1 {
    friend base1 * base2 :: add_two_base1(base1 *, base1 *);
    friend base1 * derived :: add_two_base1(base1 *, base1 *);

    int x, y;
    public:
        base1 (int a, int b): x(a), y(b) {}        
        void show() {
            cout << x << " " << y << endl;
        }
};



base1 * base2 :: add_two_base1(base1 * bs11, base1 * bs12) {
    base1 * bs1 =  new base1(bs11->x + bs12->x, bs11->y + bs12->y);
    return bs1;
}


base1 * derived :: add_two_base1(base1 * bs11, base1 *bs12) {
    base1 * bs1 =  new base1(bs11->x + bs12->x + 2, bs11->y + bs12->y + 2);
    return bs1;
}

int main () {
    base1 * bs1 = new base1(2,3);
    base1 * bs2 = new base1(4,2);
    base2 * bss2 = new base2();
    base1 * bs3 = bss2->add_two_base1(bs1,bs2);
    bs3->show(); // 6 5

    base2 * bs_ptr = new base2();
    derived * der_ptr = new derived();
    bs_ptr = der_ptr;
    base1 * bs4 = bs_ptr->add_two_base1(bs1,bs2);
    bs4->show(); // calls the add_two_base1 function of derived class
    return 0;
}