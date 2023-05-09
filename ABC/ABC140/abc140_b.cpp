#include <iostream>

int main(){
    int N;
    std::cin >> N;
    int A[N];
    for(int i = 0; i < N; ++i){
        std::cin >> A[i];
    }
    int B[N];
    for(int i = 0; i < N; ++i){
        std::cin >> B[i];
    }
    int C[N - 1];
    for(int i = 0; i < N - 1; ++i){
        std::cin >> C[i];
    }

    int ans = 0;
    int previous = -10;
    for(int i = 0; i < N; ++i){
        ans += B[i];
        if(A[i] == previous + 1){
            ans += C[previous - 1];
        }
        previous = A[i];
    }
    std::cout << ans << std::endl;
}