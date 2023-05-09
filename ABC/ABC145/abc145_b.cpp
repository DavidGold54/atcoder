#include <iostream>
#include <string>

int main(){
    int N;
    std::cin >> N;
    std::string S;
    std::cin >> S;

    if(N % 2 != 0){
        std::cout << "No" << std::endl;
        return 0;
    }
    for(int i = 0; i < N / 2; ++i){
        if(S[i] == S[N / 2 + i]){
            continue;
        }else{
            std::cout << "No" << std::endl;
            return 0;
        }
    }
    std::cout << "Yes" << std::endl;
}