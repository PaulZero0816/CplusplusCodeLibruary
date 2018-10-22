#include <iostream>

template <typename T>
void print(T value){
    std::cout<<value<<" size: "<<sizeof(value)<<std::endl;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    double a = 1;
    print(a);
    return 0;
}