#include <iostream>
using namespace std;



int main()
{
    int a = 10;
    int &b = a;
    cout << "a的地址为" << (long long)&a << "值为" << a << endl;
    cout << "b的地址为" << (long long)&b << "值为" << b << endl;
    b = 20;
    cout << "a的地址为" << (long long)&a << "值为" << a << endl;
    cout << "b的地址为" << (long long)&b << "值为" << b << endl;
    
    int &c = b;
    cout << "c的地址为" << (long long)&c << "值为" << c << endl;
    c = 30;
    cout << "a的地址为" << (long long)&a << "值为" << a << endl;
    cout << "b的地址为" << (long long)&b << "值为" << b << endl;   



    return 0 ;
}