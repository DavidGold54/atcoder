#include <iostream>

int main(){
    int N;
    std::cin >> N;
    long long A[N + 1];
    for(int i = 0; i < N + 1; ++i){
        std::cin >> A[i];
    }
    long long B[N];
    for(int i = 0; i < N; ++i){
        std::cin >> B[i];
    }

    long long count = 0;
    for(long long i = 0; i < N; ++i){
        if(B[i] > A[i]){
            count += A[i];
            B[i] -= A[i];
            if(B[i] > A[i + 1]){
                count += A[i + 1];
                A[i + 1] = 0;
            }else{
                count += B[i];
                A[i + 1] -= B[i];
            }
        }else{
            count += B[i];
        }
    }
    std::cout << count << std::endl;
}