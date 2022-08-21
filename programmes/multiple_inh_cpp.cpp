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

class base2 {
    int x;
    public:

        base2() { x = 0; }

        base2(int x) { this->x = x; }

        void show() { 
            cout << x << endl;
        }

    protected:

        void set(int y) { x = y; }
};

class derived: public base1, public base2{
    public:
        derived(int x, int y): base1(x), base2(y) {}
        // void show_xy() { show(); } if we write only this the compiler got confuse which show to call (base1 or base2)
        void show_xy() {  // to solve above ambiguity we use scope resolution operator;
            base1 :: show();
            base2 :: show(); 
        }
};

int main() {
    derived * der = new derived(3,4);
    der->show_xy();

    // 3
    // 4

    return 0;
}