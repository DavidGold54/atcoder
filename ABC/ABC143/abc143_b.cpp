#include <iostream>

int main(){
    int N;
    std::cin >> N;
    int d[N];
    for(int i = 0; i < N; ++i){
        std::cin >> d[i];
    }

    int ans = 0;
    for(int i = 0; i < N; ++i){
        for(int j = i + 1; j < N; ++j){
            if(i != j){
                ans += d[i] * d[j];
            }
        }
    }
    std::cout << ans << std::endl;
}