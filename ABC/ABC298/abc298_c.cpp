#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

int main(){
    int N, Q;
    std::cin >> N;
    std::cin >> Q;
    int query[Q][3];
    std::vector<int> box[N];
    for(int i = 0; i < Q; ++i){
        std::cin >> query[i][0];
        if(query[i][0] == 1){
            std::cin >> query[i][1] >> query[i][2];
            box[query[i][2] - 1].push_back(query[i][1]);
        }else if(query[i][0] == 2){
            std::cin >> query[i][1];
            std::sort(box[query[i][1] - 1].begin(), box[query[i][1] - 1].end());
            for(int n : box[query[i][1] - 1]){
                std::cout << n << " ";
            }
            std::cout << std::endl;
        }else{
            std::cin >> query[i][1];
            std::set<int> v;
            for(int j = 0; j < Q; ++j){
                if(query[j][0] == 1){
                    if(query[j][1] == query[i][1]){
                        v.insert(query[j][2]);
                    }
                }
            }
            for(int n : v){
                std::cout << n << " ";
            }
            std::cout << std::endl;
        }
    }
}