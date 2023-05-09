#include <iostream>

int main(){
    int N;
    std::cin >> N;
    int p[N];
    for(int i = 0; i < N; ++i){
        std::cin >> p[i];
    }

    int count = 0;
    for(int i = 0; i < N; ++i){
        if(p[i] != i + 1){
            ++count;
        }
    }
    if(count <= 2){
        std::cout << "YES" << std::endl;
    }else{
        std::cout << "NO" << std::endl;
    }
}