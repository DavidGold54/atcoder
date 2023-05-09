#include <iostream>

int main(){
    int x[5];
    for(int i = 0; i < 5; ++i){
        std::cin >> x[i];
    }

    for(int i = 0; i < 5; ++i){
        if(x[i] == 0){
            std::cout << i + 1 << std::endl;
            return 0;
        }
    }
}