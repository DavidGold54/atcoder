#include <iostream>
#include <string>

int main(){
    std::string S;
    std::cin >> S;

    if(S.back() == 's'){
        S += "es";
    }else{
        S += "s";
    }
    std::cout << S << std::endl;
}