#include <iostream>
using namespace std;

int main() {
    //sizeof()函数可以返回数据类型的大小
    int a = 10;
    cout << "a=" << a << "\n" <<sizeof(int)<< endl;

    //1-09  实型 浮点型
    float f1 = 10.12345678f;
    cout << "f1=" << f1 << "\n" << sizeof(float) << endl;

    //char
    char ch = 97;
    cout <<"ch的值="<<ch<<endl;

    // string 
    char  str1[] = "Nihao zxl";
    cout <<str1<<"\r\n"<<"\t"<<endl;

    string str2 = "hhahahahah";
    cout << str2 << "\r\n" << "\t" << endl;

    // cin
    string str3;
    cout<<"请输入一个字符串"<<endl;
    cin>>str3;

    cout<<"str3 == "<<str3<<endl;



    system("pause");
    //

    return 0;

}