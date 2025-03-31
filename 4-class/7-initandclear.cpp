#include <iostream>
#include <math.h>
using namespace std;


int main(){

    float lcm = 20.3201;
    float theta = 3.14 / 4;
    float fai = 0;
    short rcm = 45;
    float mu = 3.14/ 2;
    float li;
    float l1,l2,l3,l4;

    for(int i = 1; i <= 4; i++)
    {
    li = lcm - theta*rcm*cos(fai +(i-1)*mu);
    cout<<"l"<<i<<"="<<li<<endl;
}

    system("pause");
    return 0;
}