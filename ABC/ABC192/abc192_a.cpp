#include <iostream>

int main(){
    int X;
    std::cin >> X;

    for(int i = 0; i < 1002; ++i){
        if(i * 100 > X){
            std::cout << i * 100 - X << std::endl;
            return 0;
        }
    }
}