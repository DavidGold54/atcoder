#include <iostream>

int main(){
    int A, B, C;
    std::cin >> A >> B >> C;

    if(C >= A - B){
        std::cout << C - (A - B) << std::endl;
    }else{
        std::cout << 0 << std::endl;
    }
}