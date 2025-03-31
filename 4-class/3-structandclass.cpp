#include <iostream> 
using namespace std;

class Student{
    int age;
    void show(){
        cout<<"age"<<age<<endl;


    }
};

struct Student2{

    int age;
    protected:
    void show(){
        cout<<"age"<<age<<endl;

    }
};

int main(){
struct Student2 stu;
Student stu2;
stu.show();
//stu2.show();


}