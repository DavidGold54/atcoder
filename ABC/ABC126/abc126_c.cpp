#include <iostream>
#include <iomanip>
#include <cmath>

int main(){
    int N, K;
    std::cin >> N >> K;

    double prob = 0.0;
    for(int i = 1; i <= N; ++i){
        double tmp = 1.0 / (double)N;
        int now = i;
        while(now < K){
            now *= 2;
            tmp /= 2;
        }
        prob += tmp;
    }

    std::cout << std::setprecision(12) << prob << std::endl;

    return 0;
}