#include <iostream>
using namespace std;

int log2(int arg) {
    int r = 1;
    int p = -1;
    while (r <= arg) {
        r *= 2;
        p++;
    }
    return p;
}

int main() {
    
    int n;
    std::cin >> n;
 
    while(n--) {
        int k;
        std::cin >> k;  
        std::cout << log2(k) << std::endl;
    }
    return 0;
}
