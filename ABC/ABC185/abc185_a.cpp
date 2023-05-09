#include <iostream>
#include <algorithm>

int main(){
    int A[4];
    for(int i = 0; i < 4; ++i){
        std::cin >> A[i];
    }

    std::cout << *std::min_element(A, A + 4) << std::endl;
}