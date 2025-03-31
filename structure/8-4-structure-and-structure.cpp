#include <iostream>
using namespace std;

struct Student{
    string name;
    short age;
    float score;    
};

struct Teacher{
    string name;
    short age;
    struct Student stu=
    {
        "李四",
        20,
        99.9   
    };
};

int main()
{
   // Student stu;
    Teacher t1={
        "张三",
        30

    };
    cout<<"老师的姓名："<<t1.name<<"年龄："<<t1.age<<"学生姓名："<<t1.stu.name<<endl;










    system("pause");
    return 0;
}