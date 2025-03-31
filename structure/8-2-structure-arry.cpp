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

    struct Student stuarry[3]={
        {"张三",18,99},
        {"李四",20,99.8},
        {"wangmazi",88,59.9}
    };

    struct Student stuarry2[0];
    stuarry2[0] = {"zhangsan",18,9999};



    for (short i = 0;i<1;i++){
        cout<<"姓名:"<<stuarry2[i].name<<"年龄:"<<stuarry2[i].age<<"分数:"<<stuarry2[i].scort<<endl;
    }

    Student *p = &stuarry[2];
   //pstu->name = "abaaba";

    cout<<"xingming:"<<p->name<<endl;




   
    system("pause");
    return 0;
}