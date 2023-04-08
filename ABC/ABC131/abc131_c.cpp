#include <iostream>
#include <numeric>

int main(){
    long long A, B, C, D;
    std::cin >> A >> B >> C >> D;

    long long lcm = std::lcm(C, D);
    long long countA = A - 1 - (A - 1) / C - (A - 1) / D + (A - 1) / lcm;
    long long countB = B - B / C - B / D + B / lcm;
    long long count = countB - countA;

    std::cout << count << std::endl;
    return 0;
}