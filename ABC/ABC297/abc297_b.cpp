#include <iostream>
#include <string>

int main(){
    std::string S;
    std::cin >> S;

    int b1 = S.find("B");
    int b2 = S.rfind("B");
    int r1 = S.find("R");
    int r2 = S.rfind("R");
    int k = S.find("K");

    bool cond1 = ((b1 + b2) % 2 != 0);
    bool cond2 = (r1 < k && k < r2);
    
    if(cond1 && cond2){
        std::cout << "Yes" << std::endl;
    }else{
        std::cout << "No" << std::endl;
    }
}