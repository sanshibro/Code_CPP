//返回局部变量引用

#include <iostream>
using namespace std;

int test(short &val) {
    
    cout << val << endl;
}

int main() {

    short a = 10;

    test(a);
	system("pause");
	return 0;
}