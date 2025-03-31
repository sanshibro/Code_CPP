#include <iostream>
using namespace std;

class Student{
    public:
    string name;
    short number;
    float score;

    public:
    void show(){
        cout<<"姓名："<<name<<"学号："<<number<<"分数："<<score<<endl;

    }
};


int main(){


    Student stu;
    stu.name = "zhangsan";
    stu.number = 1001;  
    stu.score = 99.9;
    stu.show();


    Student stu2;
    stu2.name = "lisi";
    stu2.number = 1002;
    stu2.score = 88.8;
    stu2.show();



    system("pause");

return 0;

}

