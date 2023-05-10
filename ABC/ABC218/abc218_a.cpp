#include <iostream>
#include <string>

int main(){
    int N;
    std::string S;
    std::cin >> N;
    std::cin >> S;

    if(S[N - 1] == 'o'){
        std::cout << "Yes" << std::endl;
    }else{
        std::cout << "No" << std::endl;
    }
}