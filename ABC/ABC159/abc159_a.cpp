#include <iostream>

int main(){
    int N, M;
    std::cin >> N >> M;

    int ans = N * (N - 1) / 2 + M * (M - 1) / 2;
    std::cout << ans << std::endl;
}