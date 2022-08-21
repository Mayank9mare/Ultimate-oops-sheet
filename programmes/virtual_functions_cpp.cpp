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

    virtual void show_point() { // declare virtual here for runtime polymorphism
        cout << x << " " << y << endl;
    }
};

class extend_coor: public coordinate {
    public:

        extend_coor (int a, int b): coordinate(a,b) {
            cout << "the constructor is called" << endl;
        }

        void show_point() {
            pair<int,int> p =  getpoint();
            cout << "point: " << p.first << " " << p.second << endl; 
        }

};


int main() {

    coordinate * coor;
    extend_coor * excoor = new extend_coor(2,3);

    coor = excoor; // base class pointer is pointing towards derived class pointer

    // // if not declare virtual
    // coor->show_point(); // runs coor show_point
    // excoor->show_point(); // runs the extended coor show_point

    // if declare virtual
    coor->show_point(); // runs extended coor show_point
    excoor->show_point(); // runs the extended coor show_point

    return 0;
}