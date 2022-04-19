#include <iostream>
#include <cmath>
using namespace std;

int discriminant(int a, int b, int c) {
    return pow(b,2) - (4*a*c);
}

int main()
{
    int a, b, c, d;
    double x1, x2;

    cin >> a >> b >> c;
    if (!(a)) return 1;

    d = discriminant(a, b, c);

    if (d>0){
        x1 = (-b + sqrt(d))/(2*a);
        x2 = (-b - sqrt(d))/(2*a);
        cout << x1 << " " << x2;
    }
    else if (d==0) {
        x1 = (-b)/(2*a);
        cout << x1 << " " << x1;
    }
    else {
        cout << "No real roots";
    }

    return 0;
}
