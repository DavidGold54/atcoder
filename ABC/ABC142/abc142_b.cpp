#include <iostream>

int main(){
    int N, K;
    std::cin >> N >> K;
    int h[N];
    for(int i = 0; i < N; ++i){
        std::cin >> h[i];
    }

    int count = 0;
    for(int i = 0; i < N; ++i){
        if(h[i] >= K){
            ++count;
        }
    }
    std::cout << count << std::endl;
}