#include <bits/stdc++.h>

using namespace std;

class coordinate {
    private:

    int x,y;

    public:
    
    coordinate (int a, int b) {
        x = a;
        y = b;
    }

    pair<int,int> getpoint() {
        return pair<int,int>(x,y);
    }

    protected:

    pair<int,int> addtopoint(int val) {
        return pair<int,int>(x+val,y+val);
    }
};

void print_pair(pair<int,int> par) {
    cout << par.first << " " << par.second << endl;
} 

int main() {
    coordinate * point = new coordinate(3,4);

    print_pair(point->getpoint());

    // output: 
    // 3 4

    return 0;
}