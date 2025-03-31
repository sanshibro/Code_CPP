#include <iostream>
using namespace std;

void func(int )
{
    cout<<"func"<<endl;


}
void func(int ,int )
{
    cout<<"func2"<<endl;


}



int main()
{


 func(10);
 func(10,10);
    return 0;

}

