#include <iostream>
#include <cmath>

int main(){
    int N, L;
    std::cin >> N >> L;

    int taste[N];
    int sum = 0;
    for(int i = 0; i < N; ++i){
        taste[i] = L + i;
        sum += taste[i];
    }
    int absmin = 1000;
    int min = 0;
    for(int i = 0; i < N; ++i){
        if(absmin > std::abs(taste[i])){
            absmin = std::abs(taste[i]);
            min = taste[i];
        }
    }
    std::cout << sum - min << std::endl;
    return 0;
}