#include <iostream>
using namespace std;
const float PI = 3.14;


//设计一个圆类 去求解圆的周长  l = 2πr
class Cricle{   
    // 圆的属性和行为
    //权限
    //属性
    public:
        float m_r;
    //行为
    float calcuateZC(){
        return 2*PI*m_r;
    }
};


int main(){
    float temp = 0;
    Cricle c1;
    cout<<"请输入圆的半径"<<endl;
    cin>>temp;
    c1.m_r = temp;
    cout<<"半径为"<<temp<<endl;

    float l = c1.calcuateZC();
    cout<<"l = "<<l<<endl;
    system("pause");


    return 0;
}