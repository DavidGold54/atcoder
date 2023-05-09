#include <iostream>

int main(){
    int N;
    std::cin >> N;

    int ans = 0;
    if(N < 10){
        ans = N;
    }else if(N >= 10 && N < 100){
        ans = 9;
    }else if(N >= 100 && N < 1000){
        ans = 9 + N - 99;
    }else if(N >= 1000 && N < 10000){
        ans = 909;
    }else if(N >= 10000 && N < 100000){
        ans = 909 + N - 9999;
    }else{
        ans = 90909;
    }
    std::cout << ans << std::endl;
}