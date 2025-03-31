#include <iostream>
using namespace std;


template<typename T>
void mySwap(T &a,T &b){
    T temp = a;
    a = b;
    b = temp;
}


template<typename T>
void mysort(T arry[],int len){

    for(int i =0;i<len;i++)
    {
        int max = i;
        for(int j = i+1; j < len; j++)
        {
            if(arry[max] < arry[j])
            {
                max = j;
            }

            if( i != max)
            {
                mySwap(arry[i],arry[max]);
            }   



        }


    }
    }



template <typename T>
void printArray(T arry[],int len){
    for(int i = 0;i<len;i++)
    {
        cout << arry[i] << " ";
    }
    cout << endl;
}

int main(){

    char arry[] = "hello";
    int len = sizeof(arry)/sizeof(arry[0]);
    
    mysort(arry,len);
    printArray(arry,len);




    return 0;
}