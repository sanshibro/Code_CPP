#include <iostream>
using namespace std;



template<typename T1,typename T2>
class Person
{
public:
    Person(T1 name,T2 age){
        this->m_Name = name;
        this->m_Age = age;
    }
    T1 m_Name;
    T2 m_Age;   
    void showPerson(){
        cout << "name: " << this->m_Name << " age: " << this->m_Age << endl;
    }
  






};


int main(){

    Person<string,int> p1("zhangsna",10);
    p1.showPerson();

    Person<char,int> p2('a',10);
    p2.showPerson();



    return 0;
}