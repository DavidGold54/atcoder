#include <iostream>
#include <string>

int main(){
    int N;
    std::cin >> N;
    std::string S;
    std::cin >> S;

    if(S.find("o") != std::string::npos && S.find("x") == std::string::npos){
        std::cout << "Yes" << std::endl;
    }else{
        std::cout << "No" << std::endl;
    }
}