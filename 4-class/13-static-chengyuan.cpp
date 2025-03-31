#include <iostream>
using namespace std;
class Person{
public:
    // Person():m_B(0),m_A (10){}
    //静态成员
    //1、 所有对象共享同一份数据
    //2、 在编译阶段就分配内存
    //3、 在类内声明  在类外初始化
    static int m_A;
    int m_B;

    //静态成员函数
    //1、所有对象公用一个静态成员函数
    //2、只能访问静态变量
    static void test_static(int a){
        cout<<"静态成员函数访问值"<<a<<endl;
        m_A = a;
        //m_B = a; //错误
    }
 

};
int Person::m_A=10;
void test01(){

Person p;
p.m_B = 100;
cout<< p.m_A<<endl;
}

int main(){
    p.m_B = 100;
    //test01();
    Person p;
    p.test_static(p.m_B);
    Person::test_static(200);
    return 0;
    
}