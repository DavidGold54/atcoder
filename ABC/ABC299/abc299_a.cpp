#include <iostream>
#include <string>

int main(){
    int N;
    std::cin >> N;
    std::string S;
    std::cin >> S;

    auto first = S.find('|');
    auto last = S.rfind('|');
    auto target = S.find('*');

    if(first < target && target < last){
        std::cout << "in" << std::endl;
    }else{
        std::cout << "out" << std::endl;
    }
}