#include <iostream>
using namespace std;


template<typename T> //声明一个模版 告诉编译器后面的T不要报错

void mySwap(T &a,T &b){
    T temp = a;
    a = b;
    b = temp;
}


int main(){


    int a = 10;
    int b = 20;
    mySwap<int>(a, b);
        cout << "a = " << a << endl;
    cout << "b = " << b << endl;
	






    return 0;
}