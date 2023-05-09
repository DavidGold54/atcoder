#include <iostream>

int main(){
    int N, T;
    std::cin >> N >> T;
    int C[N];
    for(int i = 0; i < N; ++i){
        std::cin >> C[i];
    }
    int R[N];
    for(int i = 0; i < N; ++i){
        std::cin >> R[i];
    }

    bool a = false;
    int winner = 0;
    int max = 0;
    for(int i = 0; i < N; ++i){
        if(C[i] == T && R[i] >= max){
            a = true;
            max = R[i];
            winner = i + 1;
        }
    }
    if(!a){
        T = C[0];
        max = R[0];
        for(int i = 0; i < N; ++i){
            if(C[i] == T && R[i] >= max){
                max = R[i];
                winner = i + 1;
            }
        }
    }
    std::cout << winner << std::endl;
}