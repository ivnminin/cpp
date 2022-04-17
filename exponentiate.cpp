#include <iostream>
using namespace std;

long exponentiate(int x, unsigned p) {
    long result = 1;
    int i;
    for (i=1; i<=p; i++) {
        cout << i << "\n";
        result = result * x;
    }
    return result;
}

int power(int x, unsigned p) {
    long answer;
    answer = exponentiate(x, p);
    cout << answer;
    return answer;
}

int main() {
    power(2, 32);
    return 0;
}
