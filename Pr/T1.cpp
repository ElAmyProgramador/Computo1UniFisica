#include <iostream>
using namespace std;

float Algdb(float x, float b) {
    float b_n = (0.5 * (b + (x/b)));
    return b_n;
}

int main() {
    float x, b;
    x = 5.0;
    b = x;
    for (int i = 1; i <= 10; i++) {
        b = Algdb(x, b);
        cout << i << ": " << b << endl;
    }
    return 0;
}
