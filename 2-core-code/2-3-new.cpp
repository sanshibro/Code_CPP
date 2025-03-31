#include <iostream>
using namespace std;


int *point()
{
    int *p = new int(10);
    return p;
}

int *point2(){
    int *p = new int[10];
    for (short i = 0;i<10;i++)
    {
        p[i] = i;
    }
    return p;


}

int main()
{



int *p = point2();
cout<<"p的地址为"<<(long long)p+2<<"值为"<<*(p+2)<<endl;
//delete p;
//指针都是八个字节





    return 0 ;
}