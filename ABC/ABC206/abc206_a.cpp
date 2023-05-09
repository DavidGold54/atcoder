#include <iostream>

int main(){
    int N;
    std::cin >> N;

    int price = 1.08 * N;
    if(price < 206){
        std::cout << "Yay!" << std::endl;
    }else if(price == 206){
        std::cout << "so-so" << std::endl;
    }else{
        std::cout << ":(" << std::endl;
    }
}