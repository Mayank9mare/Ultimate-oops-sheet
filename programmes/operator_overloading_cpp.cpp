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

    pair<int,int> setdata(int a, int b) {
        x = a;
        y = b;
        return pair<int,int>(x,y);
    }

    pair<int,int> getpoint() {
        return pair<int,int>(x,y);
    }
};

void print_pair(pair<int,int> p1) {
    cout << p1.first << " " << p1.second << endl;
}

coordinate * operator+(coordinate &coor1, coordinate &coor2) {
    pair<int,int> p1 = coor1.getpoint();
    pair<int,int> p2 = coor2.getpoint();
    coordinate * coor3 = new coordinate(p1.first + p2.first, p1.second+p2.second);
    return coor3;
}

coordinate * operator-(coordinate &coor1, coordinate &coor2) {
    pair<int,int> p1 = coor1.getpoint();
    pair<int,int> p2 = coor2.getpoint();
    coordinate * coor3 = new coordinate(p1.first - p2.first, p1.second - p2.second);
    return coor3;
}

int main() {
    coordinate c1(1,2), c2(4,3);

    coordinate * c3 = c1 + c2;
    print_pair(c3->getpoint());
    coordinate * c4 = c1 - c2;
    print_pair(c4->getpoint());

    //output
    //5 5
    //-3 -1

    return 0;
}