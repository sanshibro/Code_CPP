#include <iostream>
using namespace std;
#include "7.7-arry-function.h"

int  main()
{

short a = 10;
short b = 20;
cout<<"a="<<a<<endl;
cout<<"b="<<b<<endl;   


swap1(a,b);
cout<<"a= "<<a<<endl;
cout<<"b= "<<b<<endl;

swap2(&a,&b);
cout<<"a= "<<a<<endl;   
cout<<"b= "<<b<<endl;

system("pause");

return 0;
    
}