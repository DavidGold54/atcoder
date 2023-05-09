#include <iostream>

int main(){
    int N;
    std::cin >> N;

    int ans1[11] = {0};
    for(int i = 0; i < 10; ++i){
        std::cout << "? " << i + 1 << std::endl;
        std::cin >> ans1[i + 1];
        if(ans1[i] != ans1[i + 1]){
            std::cout << "! " << i << std::endl;
            return 0;
        }
    }
    int ans2[11] = {1};
    for(int i = 0; i < 10; ++i){
        std::cout << "? " << N - i - 1 << std::endl;
        std::cin >> ans2[i + 1];
        if(ans2[i] != ans2[i + 1]){
            std::cout << "! " << N - i - 1 << std::endl;
            return 0;
        }
    }
}