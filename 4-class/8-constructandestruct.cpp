#include <iostream>
using namespace std;


class Construct_And_destruct{
    public:
    Construct_And_destruct(){
        cout<<"构造函数"<<endl;
    }

    Construct_And_destruct(short a){
      short age = a;
        cout<<"有参构造函数"<<endl;
    }

    Construct_And_destruct(const Construct_And_destruct &c)
    {
        cout<<"拷贝构造函数"<<endl;
     }


    ~Construct_And_destruct(){
        cout<<"析构函数"<<endl;
    }


};



int main(){


    Construct_And_destruct c1;
    
    Construct_And_destruct c2(c1);   //如果用户没有提供拷贝构造函数

    Construct_And_destruct c3(10);


    Construct_And_destruct c4 = Construct_And_destruct(20);
//===
    Construct_And_destruct c5 = 20;
    



    return 0;
}