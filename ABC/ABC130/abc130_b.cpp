#include <iostream>

int main(){
    int N, X;
    std::cin >> N >> X;
    int L[N];
    for(int i = 0; i < N; ++i){
        std::cin >> L[i];
    }

    int count = 1;
    int D = 0;
    for(int i = 0; i < N; ++i){
        D = D + L[i];
        if(D <= X){
            ++count;
        }
    }
    std::cout << count << std::endl;
    return 0;
}