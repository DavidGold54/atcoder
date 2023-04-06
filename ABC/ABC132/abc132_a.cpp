#include <iostream>
#include <string>
#include <algorithm>

int main(){
    std::string S;
    std::cin >> S;

    std::sort(S.begin(), S.end());
    if(S[0] == S[1] && S[1] != S[2] && S[2] == S[3]){
        std::cout << "Yes" << std::endl;
    }else{
        std::cout << "No" << std::endl;
    }
    return 0;
}