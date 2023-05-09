#include <iostream>

int main(){
    int A, B;
    std::cin >> A >> B;

    int ans = (A + B - 3) / (A - 1);
    std::cout << ans << std::endl;
}