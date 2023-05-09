#include <iostream>

using namespace std;

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main() {
    int a, b;
    cin >> a >> b;
    int cnt = 0;
    while (a >= 1 && b >= 1) {
        int g = gcd(a, b);
        a -= g;
        b -= g;
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}