#include <iostream>

int main(){
    int W, H, x, y;
    std::cin >> W >> H >> x >> y;

    double area = 1.0 * W * H / 2.0;
    int other = 0;
    if (x * 2 == W && y * 2 == H){
        other = 1;
    }
    std::cout << area << " " << other << std::endl;
    return 0;
}