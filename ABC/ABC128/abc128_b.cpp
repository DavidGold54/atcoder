#include <iostream>
#include <string>

int main(){
    int N;
    std::cin >> N;
    std::string S[N];
    int P[N], num[N];
    for(int i = 0; i < N; ++i){
        std::cin >> S[i] >> P[i];
        num[i] = i + 1;
    }

    std::string tmpS;
    int tmpP, tmpNum;
    for (int i = 0; i < N - 1; ++i) {
        for (int j = 0; j < N - 1; ++j) {
            if (S[j] > S[j + 1]) {
                tmpS = S[j];
                S[j] = S[j + 1];
                S[j + 1] = tmpS;
                tmpP = P[j];
                P[j] = P[j + 1];
                P[j + 1] = tmpP;
                tmpNum = num[j];
                num[j] = num[j + 1];
                num[j + 1] = tmpNum;
            }else if(S[j] == S[j + 1] && P[j] < P[j + 1]){
                tmpS = S[j];
                S[j] = S[j + 1];
                S[j + 1] = tmpS;
                tmpP = P[j];
                P[j] = P[j + 1];
                P[j + 1] = tmpP;
                tmpNum = num[j];
                num[j] = num[j + 1];
                num[j + 1] = tmpNum;
            }
        }
    }

    for(int i = 0; i < N; ++i){
        std::cout << num[i] << std::endl;
    }

    return 0;
}