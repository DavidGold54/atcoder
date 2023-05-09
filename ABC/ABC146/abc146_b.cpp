#include <iostream>
#include <string>

int main(){
    int N;
    std::cin >> N;
    std::string S;
    std::cin >> S;

    for(char c : S){
        c += N;
    }
    std::cout << S << std::endl;
}