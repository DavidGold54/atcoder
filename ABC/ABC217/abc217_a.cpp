#include <iostream>
#include <string>

int main(){
    std::string S, T;
    std::cin >> S >> T;

    for(int i = 0; i < std::min(S.length(), T.length()); ++i){
        if(S[i] == T[i]){
            continue;
        }else if(S[i] < T[i]){
            std::cout << "Yes" << std::endl;
            return 0;
        }else if(S[i] > T[i]){
            std::cout << "No" << std::endl;
            return 0;
        }
    }
    if(S.length() < T.length()){
        std::cout << "Yes" << std::endl;
    }else{
        std::cout << "No" << std::endl;
    }
}