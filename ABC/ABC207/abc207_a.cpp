#include <iostream>

int main(){
    int A, B, C;
    std::cin >> A >> B >> C;

    std::cout << A + B + C - std::min(A, std::min(B, C)) << std::endl;
}