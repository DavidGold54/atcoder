#include <iostream>
#include <string>

int main(){
    std::string S;
    std::cin >> S;

    bool flag = false;
    for(int i = 0; i < S.length() - 1; ++i){
        if(S[i] == S[i + 1]){
            flag = true;
        }
    }
    if(flag){
        std::cout << "Bad" << std::endl;
    }else{
        std::cout << "Good" << std::endl;
    }
    return 0;
}