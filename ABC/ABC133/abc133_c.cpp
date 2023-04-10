#include <iostream>

int main(){
    int L, R;
    std::cin >> L >> R;

    int ans = 2018;
    for(int i = L; i < R; ++i){
        for(int j = i + 1; j <= R; ++j){
            long long res = 1LL * i * j % 2019LL;
            ans = std::min(ans, (int)res);
            if(ans == 0){break;}
        }
        if(ans == 0){break;}
    }

    std::cout << ans << std::endl;
    return 0;
}