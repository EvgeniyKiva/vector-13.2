#include <iostream>
#include <vector>

int main() {
    std::vector <float> Prices {2.5, 4.25, 3.0, 10.0};
    std::vector <int> ProductIndex {1, 1, 0, 3};
    float sum=0;
    for(int i=0; i<(ProductIndex.size()); i++){
        sum+=Prices [ProductIndex[i]];
    }

    std::cout << "Amount to be paid - " <<sum << std::endl;
    return 0;
}
