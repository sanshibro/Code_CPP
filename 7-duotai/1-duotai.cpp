#include <iostream>
using namespace std;

class Animal{
    public:
      virtual void speak(){
            cout<<"动物在说话"<<endl;
        }
};

class Cat : public Animal{
    public:
        void speak(){
           cout << "cat 在说话0"<<endl;


        }

};



// void dotask(Animal &animal){
//     animal.speak();
// }

void test01(){
    Cat cat;
    //123dotask(cat);

}

int main(){
    Animal a1;
    a1.speak();

  //  test01();

    return 0;
}


