#include <iostream>
using namespace std;
short maxnum = 0;
short temp = 0;
short arry[]={4,2,8,0,5,7,1,3,9};
int main() {
    // Your code here
   
   for(short i = 0;i<sizeof(arry)/sizeof(arry[0])-1;i++)
   {
        for (short j =i+1;j<sizeof(arry)/sizeof(arry[0]);j++)
        {
            
            if(arry[i] < arry[j])
            {
                temp = arry[j];
                arry[j] = arry[i];
                arry[i] = temp;



            }
        }
        cout<<arry[i];

   }

    system("pause");
    return 0;
}