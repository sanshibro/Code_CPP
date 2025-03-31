#include <iostream>
using namespace std;
class Phone{
    public:
    Phone() : m_Phonetype("iphone") {
        cout<<"Phone的默认构造函数调用"<<endl;
    }

    string m_Phonetype;


    ~Phone(){
        cout<<"Phone的析构函数调用"<<endl;
    }
};

class Person{
    public:
    Person(string renname,Phone p)
    {
        m_Name = renname;
        m_Phone = p;
        cout<<"Person的有参构造函数调用"<<endl;

    }



   
    string m_Name;
    Phone m_Phone;

    ~Person()
    {
        cout<<"Person的析构函数调用"<<endl;


    }


};


int main(){

    Phone p1;
    Person p("张三",p1);

    system("pause");
    return 0;
    
}