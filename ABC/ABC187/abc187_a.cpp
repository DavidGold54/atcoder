#include <iostream>

int main(){
    int A, B;
    std::cin >> A >> B;

    int SA = A / 100 + (A % 100) / 10 + A % 10;
    int SB = B / 100 + (B % 100) / 10 + B % 10;
    std::cout << std::max(SA, SB) << std::endl;
}