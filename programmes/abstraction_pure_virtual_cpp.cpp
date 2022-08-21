#include <bits/stdc++.h>

using namespace std;

class coordinate {
    int x,y;
    public:

    coordinate () { x = 0; y = 0; }
    
    coordinate (int a, int b) {
        x = a;
        y = b;
    }

    pair<int,int> getpoint() {
        return pair<int,int>(x,y);
    }

    virtual void show_point() = 0;// used for abstraction (now the show_point function has to be defined in the derived class)
};

class extend_coor: public coordinate {
    public:

        extend_coor (int a, int b): coordinate(a,b) {
            cout << "the constructor is called" << endl;
        }

        void show_point() {
            pair<int,int> p = getpoint();
            cout << p.first << ">>" << p.second << endl;
        }
};


int main() {
    extend_coor * excoor = new extend_coor(2,3);

    excoor->show_point();

    // 2<<3

    return 0;
}