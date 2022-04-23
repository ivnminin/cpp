#include <iostream>
using namespace std;

void flip() {
    int in;
    cin >> in;
    if (in) {
        flip();
        cout << in << ' ';
    }
}

int main()
{
    flip();
    return 0;
}
