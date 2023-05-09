#include <iostream>

int main(){
    int N;
    std::cin >> N;
    int A[N][N];
    for(int i = 0; i < N; ++i){
        for(int j = 0; j < N; ++j){
            std::cin >> A[i][j];
        }
    }
    int B[N][N];
    for(int i = 0; i < N; ++i){
        for(int j = 0; j < N; ++j){
            std::cin >> B[i][j];
        }
    }

    for(int n = 0; n < 4; ++n){
        bool failed = false;

        for(int i = 0; i < N; ++i){
            for(int j = 0; j < N; ++j){
                if(A[i][j] == 1 && B[i][j] != 1){
                    failed = true;
                    break;
                }
            }
            if(failed == true){break;}
        }

        if(failed == false){
            std::cout << "Yes" << std::endl;
            return 0;
        }else{
            int C[N][N];
            for(int i = 0; i < N; ++i){
                for(int j = 0; j < N; ++j){
                    C[i][j] = A[i][j];
                }
            }
            for(int i = 0; i < N; ++i){
                for(int j = 0; j < N; ++j){
                    A[i][j] = C[N - 1 - j][i];
                }
            }
        }
    }
    std::cout << "No" << std::endl;
}