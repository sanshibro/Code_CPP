#include <iostream>
using namespace std;
#define DAY 7


int main(){
    const int month = 12;
    //创建变量的语法： 变量类型  变量名   =  变量初始值
    int a = 10;
    short b = 10;
    long c = 10;
    long long d = 10;

    cout<<"a="<<a<<"\n"<<endl;
    cout<<"b="<<b<<"\n"<<endl;
    cout<<"c="<<c<<"\n"<<endl;
    cout<<"d="<<d<<"\n"<<endl;
    
    cout<<"一周有："<<DAY<<"天"<<"\n"<<endl;

    cout<<"一年有："<<month<<"个月"<<"\n"<<endl;

    system("pause");
    return 0;
}