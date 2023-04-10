#include <iostream>

int main(){
    int N, A, B;
    std::cin >> N >> A >> B;

    std::cout << std::min(N * A, B) << std::endl;
}