#include <iostream>

int main(){
    int N, M;
    std::cin >> N >> M;
    int L[M], R[M];
    for(int i = 0; i < M; ++i){
        std::cin >> L[i] >> R[i];
    }

    int l = L[0];
    int r = R[0];
    for(int i = 1; i < M; ++i){
        if(l < L[i]){
            l = L[i];
        }
        if(r > R[i]){
            r = R[i];
        }
    }

    int ret = r - l + 1;
    if(ret >= 0){
        std::cout << ret << std::endl;
    }else{
        std::cout << 0 << std::endl;
    }
    
    return 0;
}