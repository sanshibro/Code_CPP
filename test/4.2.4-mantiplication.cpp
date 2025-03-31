#include <iostream>
using namespace std;

int main() {
    // Your code here
    for(short i=0;i<9;i++){
        for(short j=0;j<=i;j++)
        {
            cout<<i+1<<"*"<<j+1<<"="<<(i+1)*(j+1)<<'\t';

        }
        cout<<endl;
    }

    system("pause");
    return 0;
}