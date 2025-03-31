#include <iostream>
using namespace std;

struct Student{
    string name;
    short age;
    float scort;
};
//创建了一个数据类型的集合  整个集合作为一个自定义的新的数据类型
//通过这个数据类型 可以定义新的变量


int main(){

    struct Student stu1;
    stu1.name = "张三";
    stu1.age = 18;
    stu1.scort = 99.5;
    cout<<"姓名："<<stu1.name<<"年龄："<<stu1.age<<"分数："<<stu1.scort<<endl;


    Student stu2 = {"李四",20,99.99};
    cout<<"姓名："<<stu2.name<<"年龄："<<stu2.age<<"分数："<<stu2.scort<<endl;
   
   
   
    system("pause");
    return 0;
}