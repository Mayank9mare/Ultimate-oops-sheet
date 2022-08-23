#include <bits/stdc++.h>

using namespace std;

class base1 {
    public:
        virtual void show_id() {};
        
};

class base2 : public base1 {
    private:
        int id; // very secret information
        void show_id() {
            cout << "the id is : " << id << endl;
        }
};

int main () {
    base1 * bs1 = new base1();
    base2 * bs2 = new base2();

    bs1 = bs2;
    bs1->show_id(); // runs the show id function
    return 0;
}