#include <iostream>
#include "TemplateTest.hpp"


using namespace std;

template <typename T>
void print(T value){
    std::cout<<value<<" size: "<<sizeof(value)<<std::endl;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    double a = 3;
    print(a);

    TemplateTest<double> test;
    test.add_back(a);
    std::cout<<test.get_size()<<" "<<test.get_value(0)<<endl;
    return 0;
}