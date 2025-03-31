#include <iostream>
using namespace std;

struct Student{
    string name;
    short age;
    float scort;
};
//创建了一个数据类型的集合  整个集合作为一个自定义的新的数据类型
//通过这个数据类型 可以定义新的变量
void Printstu(Student *stu);


int main(){

    struct Student s={
        "zhangsan",
        17,
        89.9
    };
   
    Printstu(&s);
    system("pause");
    return 0;
}


void Printstu(Student *stu)
{


cout<<"子函数中 姓名"<<stu->name<<"年龄"<<stu->age<<"分数"<<stu->scort<<endl;

}