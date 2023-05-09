#include <iostream>
#include <string>

int main(){
    std::string S, T;
    std::cin >> S;
    std::cin >> T;

    if(T.length() == S.length() + 1 && T.find(S) == 0){
        std::cout << "Yes" << std::endl;
    }else{
        std::cout << "No" << std::endl;
    }
}