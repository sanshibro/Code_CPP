#include <iostream>
using namespace std;


class Calculator{

    public:
        Calculator(int a,int b) : m_a(a) ,m_b(b) 
        {
    
        }

    int getResult(string operator_type)
    {

   if(operator_type == "+") 
        return m_a + m_b;
    else if(operator_type == "-") 
        return m_a - m_b;
    else if(operator_type == "*") 
        return m_a * m_b;
    else if(operator_type == "/") 
        return m_a / m_b;
    else 
        return 0;   

    }




    public:
       int  m_a;
        int  m_b;
        string operator_type;

};




int main(){
    Calculator c1(0,0);
    //构造函数初始化 法二
    while(1){
    
    cout<<"请输入数字a"<<endl;
    cin >>c1.m_a;
    cout<<"请输入运算符"<<endl;
    cin>>c1.operator_type;
    //c1.getResult(c1.operator_type);

    cout<<"请输入数字b"<<endl;
    cin >>c1.m_b;
    
    cout << c1.m_a << c1.operator_type << c1.m_b << "=" << c1.getResult(c1.operator_type) << endl;
   
    }
    return 0;
}