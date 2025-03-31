#include <iostream>
using namespace std;
class Person
{
    public:

    Person(int a,int b):m_a(a),m_b(b){}

    int m_a;
    int m_b;


};

ostream& operator<<(ostream &out, const Person &p)
{
    out << "m_a: " << p.m_a << " m_b: " << p.m_b;
    return out;
}




int main(){


    Person p(10,20);
    cout << p << endl;


    return 0;






}