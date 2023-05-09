#include <iostream>
#include <algorithm>

int main(){
    int A[3];
    for(int i = 0; i < 3; ++i){
        std::cin >> A[i];
    }

    std::sort(A, A + 3);
    if(A[2] - A[1] == A[1] - A[0]){
        std::cout << "Yes" << std::endl;
    }else{
        std::cout << "No" << std::endl;
    }
}