#include <iostream>

int main(){
    int r, D, x;
    std::cin >> r >> D >> x;

    int ret = x;
    for(int i = 0; i < 10; ++i){
        ret = r * ret - D;
        std::cout << ret << std::endl;
    }
    return 0;
}