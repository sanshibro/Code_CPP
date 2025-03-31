#ifndef TONGXUNLU_H
#define TONGXUNLU_H


#include <iostream>
#include <string>
using namespace std;
#define MAX 1000 // VCR101: 宏可以转换为 constexpr


struct Person {
    string name;
    short age;
    short sex;
    string phone;
    string address;
};

struct AddressBook {
    struct Person personArray[MAX];
    short m_size;
};


#endif
