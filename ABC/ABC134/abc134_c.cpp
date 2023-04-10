#include <iostream>
#include <algorithm>

int main(){
    int N;
    std::cin >> N;
    int A[N];
    for(int i = 0; i < N; ++i){
        std::cin >> A[i];
    }

    int B[N];
    for(int i = 0; i < N; ++i){
        B[i] = A[i];
    }
    std::sort(B, B + N);
    for(int i = 0; i < N; ++i){
        if(A[i] != B[N - 1]){
            std::cout << B[N - 1] << std::endl;
        }else{
            std::cout << B[N - 2] << std::endl;
        }
    }
    return 0;
}