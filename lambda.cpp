#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    
    auto add = [](int a, int b) { return a + b; };

    std::cout << "Adding 2+3 with lambda function: " << add(2,3) << std::endl;
    std::cout << "Adding 21+5 with lambda function: " << add(21,5) << std::endl;
    std::cout << "Adding 2105+5012 with lambda function: " << add(2105,5012) << std::endl;

    std::vector<int> v {2, 5, 7, 13, 21, 25, 50};
    std::cout << "Using lambda inside a lambda:" << std::endl;
    std::for_each(v.begin(), v.end(), [add](int x) {
        std::cout << "add(x,1) => " << add(x,1) << std::endl;
    });
}