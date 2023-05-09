#include <iostream>
#include <string>

int main(){
    int N;
    std::cin >> N;
    std::string S;
    std::cin >> S;

    int count = 0;
    int X = -1;
    for(int i = 0; i < N; ++i){
        if(S[i] == 'o'){
            ++count;
        }else{
            count = 0; 
        }
        if(count > 0 && count >= X){
            X = count;
        }
    }

    if(X < N){
        std::cout << X << std::endl;
    }else{
        std::cout << -1 << std::endl;
    }
}