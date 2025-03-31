#include <iostream>
using namespace std;


class AbstractCalculator{

    public:
    // 基类的抽象函数
    virtual int getResult(){
        return 0;
    }


    public:
     int  m_a;
     int  m_b;


};

class Add : public AbstractCalculator{
    public:
    int getResult(){
        return m_a + m_b;
    }
};

class Sub : public AbstractCalculator{
    public:
    // int getResult(){
    //     return m_a - m_b;
    // }
};

class Mul : public AbstractCalculator{
    public:
    int getResult(){
        return m_a * m_b;
    }
};



int main(){
   



    AbstractCalculator *abc = new Add;
    abc->m_a = 10;
    abc->m_b = 10;
    cout << abc->m_a << "+" << abc->m_b << "=" << abc->getResult() << endl;
    delete abc;

    Sub s1; 
    s1.m_a = 10;
    s1.m_b = 10;
    AbstractCalculator &abc1 = s1;
    cout << abc1.m_a << "-" << abc1.m_b << "=" << abc1.getResult() << endl;
    return 0;
}