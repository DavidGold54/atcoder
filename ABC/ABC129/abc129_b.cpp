#include <iostream>
#include <cmath>

int main(){
    int N;
    std::cin >> N;
    int W[N];
    for(int i = 0; i < N; ++i){
        std::cin >> W[i];
    }

    int ans = 10000;
    int sub = 0;
    for(int T = 0; T < N; ++T){
        int S1 = 0;
        int S2 = 0;
        for(int j = 0; j < N; ++j){
            if(j <= T){
                S1 += W[j];
            }else{
                S2 += W[j];
            }
            sub = std::abs(S1 - S2);
        }
        ans = std::min(ans, sub);
    }
    std::cout << ans << std::endl;
    return 0;
}