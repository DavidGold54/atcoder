#include <iostream>

int main(){
    int x, y;
    std::cin >> x >> y;

    if(x == y){
        std::cout << x << std::endl;
    }else{
        std::cout << 3 - x - y << std::endl;
    }
}