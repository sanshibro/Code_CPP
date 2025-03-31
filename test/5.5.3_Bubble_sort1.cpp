#include <iostream>
using namespace std;
short maxnum = 0;
short temp = 0;
short arry[]={4,2,8,0,5,7,1,3,9};
int main() {
    // Your code here
    


   for(short i = 0;i<sizeof(arry)/sizeof(arry[0])-1;i++)
   {
        for (short j =0;j<sizeof(arry)/sizeof(arry[0])-1-i;j++)
        {
            
            if(arry[j] > arry[j+1])
            {
                temp = arry[j];
                arry[j] = arry[j+1];
                arry[j+1] = temp;



            }
        }
        

   }

    system("pause");
    return 0;
}