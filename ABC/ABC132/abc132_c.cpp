#include <iostream>
#include <algorithm>

int main(){
    int N;
    std::cin >> N;
    int d[N];
    for(int i = 0; i < N; ++i){
        std::cin >> d[i];
    }

    std::sort(d, d + N);
    std::cout << d[N / 2] - d[N / 2 - 1] << std::endl;
    return 0;
}