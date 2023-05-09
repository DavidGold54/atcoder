#include <iostream>

int main(){
    int N;
    std::cin >> N;

    int a = N / 100;
    int b = (N - a * 100) / 10;
    int c = N - a * 100 - b * 10;
    if(a == 7 || b == 7 || c == 7){
        std::cout << "Yes" << std::endl;
    }else{
        std::cout << "No" << std::endl;
    }
}