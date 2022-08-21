#include <bits/stdc++.h>

using namespace std;

class coordinate {
    int x,y;
    public:
    
    coordinate (int a, int b) {
        x = a;
        y = b;
    }

    coordinate (int a) {
        x = a;
        y = 0;
    }

    coordinate () {
        x = 0;
        y = 0;
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
    coordinate * point2 = new coordinate(2);
    coordinate * point3 = new coordinate();

    pair<int,int> par1, par2, par3;
    par1 = point1->getpoint();
    par2 = point2->getpoint();
    par3 = point3->getpoint();

    print_pair(par1);
    print_pair(par2);
    print_pair(par3);

    // output: 
    // 3 4
    // 2 0
    // 0 0


    return 0;
}