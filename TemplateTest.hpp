//
// Created by Zeqi Qiu on 10/22/18.
//

#include "TemplateTest.h"

template <class T>
TemplateTest<T>::TemplateTest() {
    this->list.reserve(10);
}


template <class T>
int TemplateTest<T>::get_size() {
    return this->list.size();
}


template <class T>
void TemplateTest<T>::add_back(T value){
    this->list.push_back(value);
}

template <class T>
void TemplateTest<T>::delete_back(){
    this->list.pop_back();
}

template <class T>
T TemplateTest<T>::get_value(int index){
//    if(index>=get_size())
//        return nullptr;
    return this->list[index];
}
