#include <iostream>

int main(){
    int A, B;
    std::cin >> A >> B;

    int ans = B - A + 1;
    if(ans > 0){
        std::cout << ans << std::endl;
    }else{
        std::cout << 0 << std::endl;
    }
}