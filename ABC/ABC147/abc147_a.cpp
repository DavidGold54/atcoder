#include <iostream>

int main(){
    int A1, A2, A3;
    std::cin >> A1 >> A2 >> A3;

    int sum = A1 + A2 + A3;
    if(sum < 22){
        std::cout << "win" << std::endl;
    }else{
        std::cout << "bust" << std::endl;
    }
}