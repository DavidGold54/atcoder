#include <iostream>

int main(){
    int N;
    std::cin >> N;

    if(N <= 125){
        std::cout << 4 << std::endl;
    }else if(N <= 211){
        std::cout << 6 << std::endl;
    }else{
        std::cout << 8 << std::endl;
    }
}