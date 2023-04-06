#include <iostream>
#include <vector>

int main(){
    int N, M;
    std::cin >> N >> M;
    std::vector<int> S[10];
    int P[10];
    for(int i = 0; i < M; ++i){
        int k;
        std::cin >> k;
        for(int j = 0; j < k; ++j){
            int s;
            std::cin >> s;
            s--;
            S[i].push_back(s);
        }
    }
    for(int i = 0; i < M; ++i){
        std::cin >> P[i];
    }

    int ans = 0;
    for(int msk = 0; msk < (1 << N); ++msk){
        int ok = 0;
        for(int m = 0; m < M; ++m){
            int cnt = 0;
            for(auto &s: S[m]){
                if(msk & (1 << s)){cnt++;}
            }
            if(cnt % 2 == P[m]){ok++;}
        }
        if(ok == M){ans++;}
    }
    std::cout << ans << std::endl;
    return 0;
}