#include <bits/stdc++.h>

using namespace std;

class base {
    int x;
    public:

        base() { x = 0; }

        base(int x) { this->x = x; }

        void show() { 
            cout << x << endl;
        }

    protected:

        void set(int y) { x = y; }
};

class derived: public base {
    public:
        derived(int x): base(x) {}
        void show_x() { show(); }
};

int main() {
    derived * der = new derived(3);
    der->show_x();

    return 0;
}