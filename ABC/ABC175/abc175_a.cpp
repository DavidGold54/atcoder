#include <iostream>
#include <string>

int main(){
    std::string S;
    std::cin >> S;

    int max = 0;
    int count = 0;
    for(int i = 0; i < 3; ++i){
        if(S[i] == 'R'){
            ++count;
            if(max < count){
                max = count;
            }
        }else{
            count = 0;
        }
    }
    std::cout << max << std::endl;
}