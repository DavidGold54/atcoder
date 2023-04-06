#include <iostream>

int main(){
    int n;
    std::cin >> n;
    int p[n];
    for(int i = 0; i < n; ++i){
        std::cin >> p[i];
    }

    int count = 0;
    for(int i = 0; i < n - 2; ++i){
        if((p[i] < p[i + 1] && p[i + 1] < p[i + 2]) || (p[i] > p[i + 1] && p[i + 1] > p[i + 2])){
            count++;
        }
    }
    std::cout << count << std::endl;
    return 0;
}