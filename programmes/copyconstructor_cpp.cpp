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

    coordinate(coordinate * &new_obj) {
        cout << "calling cc" << endl;
        x = new_obj->x;
        y = new_obj->y;
    }

    coordinate(coordinate &new_obj) {
        cout << "calling cc obj" << endl;
        x = new_obj.x;
        y = new_obj.y;
    }

    pair<int,int> getpoint() {
        return pair<int,int>(x,y);
    }
};

void print_pair(pair<int,int> par) {
    cout << par.first << " " << par.second << endl;
} 

int main() {
    coordinate * point1 = new coordinate(3,4);
    coordinate * point2 = new coordinate(point1); // copy constructor is called 


    print_pair(point1->getpoint());
    print_pair(point2->getpoint());

    // # brain storming
    coordinate * point3 = new coordinate();
    point3 = point1; // copy constructor will not be called for assignment

    coordinate * point4 = point1; // copy constructor will not be called

    coordinate point5 = *point1; // copy constructor will be called

    // calling cc
    // 3 4
    // 3 4
    // calling cc obj

    return 0;
}