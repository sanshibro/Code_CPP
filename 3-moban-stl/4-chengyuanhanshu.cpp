#include <iostream>
//#include <istream>
using namespace std;


template<class T1,class T2>
class Person
{
    public:
        Person(T1 name,T2 age){
            this->m_Name = name;
            this->m_Age = age;
        }
        // 构造函数初始化 
        T1 m_Name;
        T2 m_Age;
        void showPerson(){
            cout << "name: " << this->m_Name << " age: " << this->m_Age << endl;
        }


};



void test1(Person<string,int> p1){
    p1.showPerson();


}


template<class T1, class T2>
void test2(Person<T1, T2>& p1) {


p1.showPerson();

}

int main(){
    Person<string,int> p("zhubajie",99);
    test2(p);



    return 0;
}