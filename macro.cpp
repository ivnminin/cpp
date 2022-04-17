#include <iostream>
using namespace std;

#define MAX(x, y, r) ({int _x = x; int _y = y; (r) = ( _x > _y ? _x : _y);})

int main() {
    int a = 10;
    int b = 20;
    int c = 0;
    cout << MAX(a += b, b, c);
}