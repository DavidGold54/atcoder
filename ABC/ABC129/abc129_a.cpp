#include <iostream>
#include <cmath>

int main(){
    int P, Q, R;
    std::cin >> P >> Q >> R;

    int ans = std::min(std::min(P + Q, P + R), R + Q);
    std::cout << ans << std::endl;
}