#include <iostream>
using namespace std;

int main() {
    // Your code here
   int *p = 0;
   int a = 10;
    p = &a;
    cout<<*p<<endl;
    cout<<p<<endl;
    // 在32位系统下，指针占用4个字节
    // 在64位系统下，指针占用8个字节
    //以下注释说明了不管什么数据类型的指针 所占用的大小都一样
    cout<<sizeof(p)<<endl;
    cout << sizeof(char *) << endl;
	cout << sizeof(float *) << endl;
	cout << sizeof(double *) << endl;

    system("pause");
    return 0;
}