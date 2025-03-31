
#include <iostream>
using namespace std;



int main() {
    // Your code here
    int x = 10;
    int y = 20;
    int z = 0;
    z = x > y ? x : y;
    cout << "z=" << z << "\n" << sizeof(int) << endl;

    //ternary operator 
    (x>y?x:y) = 100;
    cout<<"x="<<x<<"\n"<<"y="<<y<<endl;
    std::cin.get();
    return 0;
}