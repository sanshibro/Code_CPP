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
        ma_age = p.ma_age;



    }

    Person(int age){

        cout<<"有参构造函数调用"<<endl;
        ma_age = age;
        cout<<"有参构造ma_age = "<< ma_age <<endl;

        
    }

    ~Person(){
        cout<<"析构函数调用"<<endl;
    }


public:
    int ma_age;



};


void test0(){

    Person man(100);

    Person neman(man);
}


void dowork(Person p){

    cout<<"dowork"<<endl;

}
void test1(){

    Person p;

    dowork(p);   // 这里也会调用一次拷贝构造函数
   
}

Person dowork2(){

    Person p1;
    cout<<"dowork2"<<endl;
    return p1;}


void test2(){
    Person p = dowork2();

}

void test3(){
    Person  p;
    p.ma_age = 100;

    Person p2(p);
    cout<<"p2.ma_age = "<<p2.ma_age<<endl;

}

int main(){



//1 使用一个已经创建完毕的对象来初始化一个新对象

 //test1();
 test3();




// 值传递的方式给函数参数传递




// 值方式返回局部对象











    return 0;

}