#include <iostream>

int main(){
    int X, Y;
    char c;
    std::cin >> X >> c >> Y;

    if(Y >= 0 && Y <= 2){
        std::cout << X << "-" << std::endl;
    }else if(Y >= 3 && Y <= 6){
        std::cout << X << std::endl;
    }else{
        std::cout << X << "+" << std::endl;
    }
}