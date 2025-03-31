#include <iostream>
using namespace std;

class Person{
    //Name  write and read 
    //Age   read only  
    //Idol  write only 
public:
// name read and write
    void Setname(string name){
        m_name = name;
    }
    string Getname(){
        return m_name;
    }

//age  read only
    short Getage(){
        return m_age;
    }   

//idol  write only
void SetIdol(string idol){
    m_idol = idol;
}


private:
    string m_name;
    short m_age = 100;
    string m_idol;

};









int main(){

    Person p1;
    p1.Setname("zhangsan");
    short temp = p1.Getage();
    cout<<"name"<<p1.Getname()<<"age"<<temp<<endl;
    p1.SetIdol("wangwu");
  //  string temp2 = p1.idol;

    system("pause");

    return 0;


}