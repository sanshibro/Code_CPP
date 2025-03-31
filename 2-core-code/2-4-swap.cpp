#include <iostream>
using namespace std;
short &yinyong()
{
    short a = 10;
    return a;
}

short *p(){
    short a =10;
    return &a;
}


short &yinyong2(){
    static a = 10;
    return a;

}



int main(){

    //short &b = yinyong();
    // short *c = p();
    //cout<<"b的值为"<<b<<endl;
    //cout<<"c的值为"<<*c<<endl;
    short &d = yinyong2();
    cout<<"d的值为"<<d<<endl;
    d = 20;
    cout<<"d的值为"<<d<<endl;

    return 0;
}