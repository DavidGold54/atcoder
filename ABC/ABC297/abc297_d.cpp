#include <iostream>
#include <unistd.h>

int main(){
    unsigned long long A, B;
    std::cin >> A >> B;

    unsigned long long count = 0;
    while(A != B){
        //std::cout << A << "," << B << "," << count << std::endl; 
        if(A > B){
            if(A % B != 0){
                unsigned long long r = A / B;
                A -= r * B;
                count += r;
            }else{
                unsigned long long r = A / B - 1;
                A -= r * B;
                count += r;
            }
        }else if(A < B){
            if(B % A != 0){
                unsigned long long r = B / A;
                B -= r * A;
                count += r;
            }else{
                unsigned long long r = B / A - 1;
                B -= r * A;
                count += r;
            }
        }
    }
    std::cout << count << std::endl;
}