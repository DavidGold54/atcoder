#include <iostream>

int main(){
    int D, T, S;
    std::cin >> D >> T >> S;

    if((D + S - 1) / S <= T){
        std::cout << "Yes" << std::endl;
    }else{
        std::cout << "No" << std::endl;
    }
}