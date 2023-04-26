#include <iostream>
using namespace std;

class Int {
    private:
    int i;
    public:
    Int(){i = 0;}
    Int(int i){this->i = i;}
    void print() { cout << i << endl; }
    void add(Int &i1, Int &i2) { i = i1.i + i2.i; }
};

int main() {
    Int i1, i2(2), i3(3);
    i1.add(i2, i3);
    i1.print();
    return 0;
}
