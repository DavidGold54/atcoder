#include <iostream>

int main(){
    int N, K;
    std::cin >> N >> K;
    int a[N][N];
    for(int i = 0; i < N; ++i){
        for(int j = 0; j < N; ++j){
            std::cin >> a[i][j];
        }
    }
    int Q;
    std::cin >> Q;
    int s[Q];
    int t[Q];
    for(int i = 0; i < Q; ++i){
        std::cin >> s[i] >> t[i];
    }

    
}