#include <iostream>

int main(){
    int A, B;
    std::cin >> A >> B;

    if(A < B * 2){
        std::cout << 0 << std::endl;
    }else{
        std::cout << A - B * 2 << std::endl;
    }
}