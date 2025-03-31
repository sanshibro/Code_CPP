#include <iostream>
using namespace std;



class Person{
    
 // friend class Goodgay;


public :

Person():m_Sittingroom("客厅"),m_Bedroom("卧室"){

}
    void Guest(){
        cout<<"客厅"<<m_Sittingroom<<endl;
     //   cout<<"卧室"<<m_Bedroom<<endl;
    }


public :
    string m_Sittingroom;




private:
    string m_Bedroom;



};
class Goodgay{



    public :
        void test(Person *p){
            cout<<"好基友正在访问："<<p->m_Bedroom<<endl;
            cout<<"好基友正在访问："<<p->m_Sittingroom<<endl;
        }







};






// void Goodfriend(Person &p){

//     cout<<"好友来了"<<p.m_Sittingroom<<endl;

//     cout<<"好友来了"<<p.m_Bedroom<<endl;

// }


int main() {


    Person p;
    p.Guest();
    

    Goodgay p2;
    p2.test(&p);






    return 0;
}