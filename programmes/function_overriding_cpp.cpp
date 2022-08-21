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

class extension : public coordinate {
    public:
        extension(int x1, int y1): coordinate(x1,y1) {
            cout << "extension is created" << endl;
        }

        pair<int,int> getpoint() { // overwriting the function in the derived class
            cout << "getting the coordinates" << endl;
            return coordinate :: getpoint();
        }
};

void print_pair(pair<int,int> par) {
    cout << par.first << " " << par.second << endl;
} 

int main() {
    extension * lin = new extension(1,2);
    print_pair(lin->getpoint());

    return 0;
}