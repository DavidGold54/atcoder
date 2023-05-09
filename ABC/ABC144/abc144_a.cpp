#include <iostream>

int main(){
    int A, B;
    std::cin >> A >> B;

    if(A > 9 || B > 9){
        std::cout << -1 << std::endl;
    }else{
        std::cout << A * B << std::endl;
    }
}