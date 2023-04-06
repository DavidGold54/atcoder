#include <iostream>

int main(){
    int S;
    std::cin >> S;

    int upper = S / 100;
    int lower = S % 100;

    bool upperInMM = upper >= 1 && upper <= 12;
    bool lowerInMM = lower >= 1 && lower <= 12;

    if (!upperInMM && lowerInMM){
        std::cout << "YYMM" << std::endl;
    }else if (upperInMM && !lowerInMM){
        std::cout << "MMYY" << std::endl;
    }else if (upperInMM && lowerInMM){
        std::cout << "AMBIGUOUS" << std::endl;
    }else{
        std::cout << "NA" << std::endl;
    }
    
    return 0;
}