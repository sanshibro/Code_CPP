#include <iostream>
using namespace std;


template<typename T1,typename T2>
class Person{

public:
    Person(T1 name,T2 age){
        this->name = name;
        this ->age = age;
    }
private:
    T1 m_name;
    T2 m_age;

};








int main() {
    // 程序入口
  
    return 0;
}