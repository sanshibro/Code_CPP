#include <iostream>
using namespace std;


class Person {
public:


// Person(int a,int b,int c)
// {
//     m_A =a;
//     m_B =b;
//     m_C =c;

// }


    int m_A;
    int m_B;
    int m_C;
    //**语法：**`构造函数()：属性1(值1),属性2（值2）... {}`
    Person():m_A(10),m_B(20),m_C(30){


    }
    //这里本质上还是对构造函数的应用
public:
    void printtest()
    {
    cout<<"m_A="<<m_A<<"m_B="<<m_B<<"m_C="<<m_C<<endl;
  

    }
};

int main() {


    // Person p1(10,20,30);
    // p1.printtest();
    Person p;
    p.printtest();
    
    return 0;
}