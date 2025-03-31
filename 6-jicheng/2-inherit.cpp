#include <iostream>
using namespace std;


class Bassic{
    friend class Son2;
    public:
       int m_a;
        

    protected:
        int m_b;
    private:
        int m_c;

};


class Son : public Bassic{
    public:
        void test(){
            m_a = 10;
            m_b =20;
            cout <<m_a;
            cout <<m_b;
           // cout <<m_c;
        }
};


class Son2 : protected Bassic{

     public:
        void test(){
            m_a = 120;
            m_b =220;
            m_c = 320;
            cout <<m_a;
            cout <<m_b;
            cout <<m_c;
           // cout <<m_c;   

        }

};



class Son3 : private Bassic{

    public:
        void test(){
            m_a = 1032;
            m_b =2023;
            cout << m_a;
            cout << m_b;
            // cout << m_c;

        }

};


int main(){

    Son s;
    //s.m_c = 100;
    Son2 s2;
    s2.test();
   // s2.m_c = 100;

   // s2.m_b = 100;
    Son3 s3;
  //  s3.test();

    Bassic s4;
    //s4.m_c = 40;







    return 0;
}