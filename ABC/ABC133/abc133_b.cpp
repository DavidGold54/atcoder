#include <iostream>
#include <cmath>

int main(){
    int N, D;
    std::cin >> N >> D;
    int X[N][D];
    for(int i = 0; i < N; ++i){
        for(int j = 0; j < D; ++j){
            std::cin >> X[i][j];
        }
    }

    int count = 0;
    for(int i = 0; i < N; ++i){
        for(int j = i + 1; j < N; ++j){
            double sum = 0;
            for(int k = 0; k < D; ++k){
                sum += std::pow((double)(X[i][k] - X[j][k]), 2.0);
            }
            if(std::floor(std::sqrt(sum)) == std::sqrt(sum)){
                ++count;
            }
        }
    }

    std::cout << count << std::endl;
    return 0;
}