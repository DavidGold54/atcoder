#include <iostream>

int main(){
    int N, D;
    std::cin >> N >> D;
    int T[N];
    for(int i = 0; i < N; ++i){
        std::cin >> T[i];
    }

    int ans = 0;
    for(int i = 1; i < N; ++i){
        if(T[i] - T[i - 1] <= D){
            ans = T[i];
            std::cout << ans << std::endl;
            break;
        }
    }
    if(ans == 0){
        std::cout << -1 << std::endl;
    }
}