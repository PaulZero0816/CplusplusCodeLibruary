//
// Created by Zeqi Qiu on 10/28/18.
//

#ifndef CPLUSPLUSCODELIB_LAMBDATEST_H
#define CPLUSPLUSCODELIB_LAMBDATEST_H
#include <iostream>
void testLambda(){
    int val = 0;
    auto func1 = [=] () mutable -> bool {val = 1; return true;};
    func1();
    std::cout<<"val: "<<val<<std::endl;
    auto func2 = [&] () -> bool {val = 2; return false;};
    auto c = func2();
    std::cout<<"val: "<<val<<" bool: "<<c<<std::endl;

    int med = 3;
    auto func3 = [&] (int m) -> bool {val = m + med +val; return true;};
    auto d = func3(med);
    std::cout<<"val: "<<val<<" med: "<<med<<" bool: "<<d<<std::endl;
}

#endif //CPLUSPLUSCODELIB_LAMBDATEST_H
