#include <iostream>

int main(){
    int A, B;
    std::cin >> A >> B;

    if(A != 1 && B != 1){
        std::cout << 1 << std::endl;
    }else if(A != 2 && B != 2){
        std::cout << 2 << std::endl;
    }else if(A != 3 && B != 3){
        std::cout << 3 << std::endl;
    }
}