#include <iostream>
using namespace std;


class Person {
public:

    Person(){
        cout<<"默认构造函数调用"<<endl;
        ma_age = 0;

    }

    Person(const Person &p){
        cout<<"拷贝构造函数调用"<<endl;

        //为地址中的内容申请内存空间 深拷贝
        ma_Height = new int(*p.ma_Height);

        ma_age = p.ma_age;



    }

    Person(int age,int height){

        cout<<"有参构造函数调用"<<endl;
        ma_Height = new int (height);
        //	利用new创建的数据，会返回该数据对应的类型的指针
        ma_age = age;
       // cout<<"有参构造ma_age = "<< ma_age <<endl;

        
    }

    ~Person(){
        // 析构代码  将堆区开辟的数据做释放操作
        if(ma_Height != NULL){
            delete ma_Height;
            ma_Height = NULL;
        }
        cout<<"析构函数调用"<<endl;
        
    }


public:
    int ma_age;
    int *ma_Height;
};


void test0(){
    Person p1(18,160);
    cout<<"年龄p1.ma_age = "<<p1.ma_age<<endl;
    cout<<"身高p1.ma_Height = "<<*p1.ma_Height<<endl;
    
    Person p2(p1);
    cout<<"年龄p2.ma_age = "<<p2.ma_age<<endl;
    cout<<"身高p2.ma_Height = "<<*p2.ma_Height<<endl;
    cout<<"====================="<<endl;
  

}



int main(){
    test0();
    return 0;

}