#include <iostream>
#include <string>

int main(){
    std::string S;
    std::cin >> S;

    for(int i = 0; i < S.length(); ++i){
        if(i % 2 == 0 && (S[i] == 'R' || S[i] == 'U' || S[i] == 'D')){
            continue;
        }else if(i % 2 != 0 && (S[i] == 'L' || S[i] == 'U' || S[i] == 'D')){
            continue;
        }else{
            std::cout << "No" << std::endl;
            return 0;
        }
    }
    std::cout << "Yes" << std::endl;
}