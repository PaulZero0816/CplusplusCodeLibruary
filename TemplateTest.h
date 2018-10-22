//
// Created by Zeqi Qiu on 10/22/18.
//
#ifndef CPLUSPLUSCODELIB_TEMPLATETEST_H
#define CPLUSPLUSCODELIB_TEMPLATETEST_H
#include <iostream>
#include <vector>


template <class T>
class TemplateTest {
public:
    TemplateTest();
    ~TemplateTest() = default;
    void add_back(T value);
    void delete_back();
    int get_size();
    T get_value(int index);
private:
    std::vector<T> list;
};



#endif //CPLUSPLUSCODELIB_TEMPLATETEST_H
