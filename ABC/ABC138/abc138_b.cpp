#include <iostream>
#include <iomanip>

int main(){
    int N;
    std::cin >> N;
    int A[N];
    for(int i = 0; i < N; ++i){
        std::cin >> A[i];
    }

    double a = 0;
    for(int i = 0; i < N; ++i){
        a += 1.0 / A[i];
    }
    std::cout << std::scientific << 1.0 / a << std::endl;
}