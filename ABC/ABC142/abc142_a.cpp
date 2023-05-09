#include <iostream>

int main(){
    int N;
    std::cin >> N;

    if(N % 2 == 0){
        std::cout << 0.5 << std::endl;
    }else{
        std::cout << 0.5 + 1.0 / (2.0 * N) << std::endl;
    }
}