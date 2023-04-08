#include <iostream>
#include <vector>

const long long mod = 1e9 + 7;

int main(){
    int N, M;
    std::cin >> N >> M;
    std::vector<int> oks(N + 1, true);
    for(int i = 0; i < M; ++i){
        int a;
        std::cin >> a;
        oks[a] = false;
    }

    std::vector<long long int> dp(N + 1);
    dp[0] = 1;
    for(int i = 0; i < N; ++i){
        for(int d = i + 1; d <= std::min(N, i + 2); ++d){
            if(oks[d]){
                dp[d] += dp[i];
                dp[d] %= mod;
            }
        }
    }

    std::cout << dp[N] << std::endl;
    return 0;
}