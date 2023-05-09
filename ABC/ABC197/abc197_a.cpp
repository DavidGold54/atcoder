#include <iostream>
#include <string>

int main(){
    std::string S;
    std::cin >> S;

    S += S[0];
    S.erase(0, 1);
    std::cout << S << std::endl;
}