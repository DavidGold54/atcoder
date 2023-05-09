#include <iostream>
#include <string>

int main(){
    std::string S, T;
    std::cin >> S >> T;
    int A, B;
    std::cin >> A >> B;
    std::string U;
    std::cin >> U;

    if(S == U){
        std::cout << --A << " " << B << std::endl;
    }else{
        std::cout << A << " " << --B << std::endl;
    }
}