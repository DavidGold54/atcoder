#include <iostream>

int main(){
    int A, B;
    std::cin >> A >> B;

    int sum = A + B;
    if(sum % 2 == 0){
        std::cout << sum / 2 << std::endl;
    }else{
        std::cout << "IMPOSSIBLE" << std::endl;
    }
}