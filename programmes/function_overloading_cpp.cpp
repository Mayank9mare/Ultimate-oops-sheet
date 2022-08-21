#include <bits/stdc++.h>

using namespace std;

class coordinate {
    int x,y;
    public:
    
    coordinate (int a, int b) {
        x = a;
        y = b;
    }

    pair<int,int> getpoint() {
        return pair<int,int>(x,y);
    }

    pair<int,int> getpoint(int p) {
        return pair<int,int>(x+p,y+p);
    }

    pair<int,int> getpoint(int p, int q) {
        return pair<int,int>(x+p,y+q);
    }
};



void print_pair(pair<int,int> par) {
    cout << par.first << " " << par.second << endl;
} 

int main() {
    coordinate * point1 = new coordinate(3,4);
    print_pair(point1->getpoint());
    print_pair(point1->getpoint(2));
    print_pair(point1->getpoint(3,4));

    // output: 
    // 3 4
    // 5 6
    // 6 8


    return 0;
}