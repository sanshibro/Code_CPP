#include <iostream>
using namespace std;

int main() {
    // Your code here

    short number = 100;
    cout<<"The Flower numbers are:"<<""<<endl;
    do{
        short a=0;
        short b=0;      
        short c=0;
         a = number/100;
         b = number/10%10;
         c = number % 10;
        if(a*a*a+b*b*b+c*c*c==number){
           cout<<number<<endl;
    
        }
       
        number++;



    }while(number<1000);


    system("pause");

    return 0;
}