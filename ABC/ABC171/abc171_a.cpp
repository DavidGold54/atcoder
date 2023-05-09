#include <iostream>
#include <cctype>

int main(){
    char alpha;
    std::cin >> alpha;

    if(std::islower(alpha)){
        std::cout << "a" << std::endl;
    }else{
        std::cout << "A" << std::endl;
    }
}