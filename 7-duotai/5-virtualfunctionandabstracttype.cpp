#include <iostream>
using namespace std;

class Base{

    public:
        virtual void func() = 0;


    public:
        int m_a;
        int m_b;

};



class Son : public Base{
    public:
        void func(){
            cout << "funczilei调用" << endl;
        }
};



int main(){

    Base *abc = new Son;
    //  使用指针的方式指向子类
    abc->func();
    delete abc;

    








    return 0;
}