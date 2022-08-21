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

    ~coordinate () {
        cout << "destructor is called" << endl;
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
    print_pair(point1->getpoint());

    coordinate point2(4,5);
    print_pair(point2.getpoint());
   
    delete point1;

    // 3 4
    // 4 5
    // destructor is called
    // destructor is called
    
    return 0;
}