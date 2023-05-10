#include <iostream>
#include <string>

int main(){
    std::string S;
    std::cin >> S;

    if(S == "Hello,World!"){
        std::cout << "AC" << std::endl;
    }else{
        std::cout << "WA" << std::endl;
    }
}