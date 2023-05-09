#include <iostream>

int main(){
    int A, B;
    std::cin >> A >> B;

    if(A <= B && B <= 6 * A){
        std::cout << "Yes" << std::endl;
    }else{
        std::cout << "No" << std::endl;
    }
}