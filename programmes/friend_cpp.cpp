#include <bits/stdc++.h>

using namespace std;

class base; // forward declaration

class friend_class {
    public:
    void friend_fun(base *, base *);
};

class base {
    friend base * addbase(base *, base *); // declared addbase as friend function and so addbase can access the private and protected variables of base class
    friend void friend_class::friend_fun(base *, base *); // declaring the function from the class as friend
    friend class friend_class; // declaring whole class as friend class;
    int x;
    public:
        base(int x) {
            this->x = x;
        }

        void print() {
            cout << this->x << endl;
        }
};

void friend_class::friend_fun(base * b1, base *b2) {
    cout <<  b1->x + b2->x << endl;
}

base * addbase(base * base1, base * base2) {
    base * base3 = new base(base1->x + base2->x);
    return base3;
}


int main () {
    base * bs1 = new base(3);
    base * bs2 = new base(4);
    base * bs = addbase(bs1, bs2); // adding two base classes using friend function
    bs->print(); 

    friend_class * fc = new friend_class();
    fc->friend_fun(bs1, bs2);

    // 7
    // 7
    
    return 0;
}