#include <iostream>

int main(){
    int A, B;
    std::cin >> A >> B;

    int ret;
    if(A >= 13){
        ret = B;
    }else if(A >= 6 && A < 13){
        ret = B / 2;
    }else{
        ret = 0;
    }

    std::cout << ret << std::endl;
    return 0;
}