//#pragma once
#include <string>
using namespace std;





template<class T1,class T2>
class Person
{
    public:
        Person(T1 name,T2 age);
           
        // 构造函数初始化 
        T1 m_Name;
        T2 m_Age;
        void showPerson();
          
};
template<class T1,class T2>
Person< T1, T2>::Person(T1 name,T2 age){
    this->m_Name = name;
    this->m_Age = age;
}


template<class T1,class T2>
void Person<T1,T2>::showPerson(){
    cout << "name: " << this->m_Name << " age: " << this->m_Age << endl;
}


