#include <iostream>
#include <string>

int main(){
    std::string S;
    std::cin >> S;

    if(S == "SUN"){
        std::cout << 7 << std::endl;
    }else if(S == "MON"){
        std::cout << 6 << std::endl;
    }else if(S == "TUE"){
        std::cout << 5 << std::endl;
    }else if(S == "WED"){
        std::cout << 4 << std::endl;
    }else if(S == "THU"){
        std::cout << 3 << std::endl;
    }else if(S == "FRI"){
        std::cout << 2 << std::endl;
    }else{
        std::cout << 1 << std::endl;
    }
}