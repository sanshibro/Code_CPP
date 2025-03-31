#include <iostream>
using namespace std;
short maxnum = 0;
int main() {
    // Your code here
    short arry[5]={300,350,400,450,500};
    for(short i=0;i<5;i++){
        if(arry[i]>maxnum){ 
            
             maxnum = arry[i];

        }
        else maxnum = maxnum;
   




    }
    cout<<maxnum<<endl; 
    // cout<<sizeof(arry)<<endl;
    system("pause");
    return 0;
}