#include <iostream>

int main(){
    int N;
    std::cin >> N;
    int H[N];
    for(int i = 0; i < N; ++i){
        std::cin >> H[i];
    }

    int ans = 0;
    for(int i = 0; i < N - 1; ++i){
        if(H[i] < H[i + 1]){
            ans = 0;
        }else if(H[i] > H[i + 1]){
            ans += (H[i] - H[i + 1]);
        }
        if(ans >= 2){
            std::cout << "No" << std::endl;
            return 0;
        }
    }
    std::cout << "Yes" << std::endl;
}