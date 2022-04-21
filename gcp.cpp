#include <iostream>
using namespace std;

unsigned gcd (unsigned a, unsigned b) {
    if ((a!=0) and (b!=0)){
        if (a>b) {
            gcd(a%b, b);
        } else {
            gcd(a, b%a);
        }
    } else {
        return a + b;
    }
}

int main() {
    cout << gcd(70, 84);
}
