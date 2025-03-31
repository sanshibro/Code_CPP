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
        cout<<"猫在说话"<<endl;
    }




};

void test(Animal &animal)
{
    animal.speak();


}
int main(){

    Cat cat;
    test(cat);

    return 0;
}