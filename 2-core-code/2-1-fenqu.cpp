#include <iostream>
using namespace std;

short g_a = 10;
short g_b = 20;
//全局变量存储在静态存储区
//全局变量的生命周期是整个程序的生命周期    

int main()
{

    int a = 10;
    int b = 20;
    cout <<"局部变量a的地址"<<(int)&a<<endl;
    cout <<"局部变量b的地址"<<(int)&b<<endl;

   // cout <<"全局变量g_a的地址"<<(int)&g_a<<endl;
    //cout <<"全局变量g_b的地址"<<(int)&g_b<<endl;





return 0;


}