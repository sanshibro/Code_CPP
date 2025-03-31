#include <iostream>
using namespace std;



int main(){

    short PigA = 0;
    short PigB = 0;
    short PigC = 0;
    cout<<"Please Enter The Wei100ght Of PigA"<<endl;
    cin>>PigA;
    cout<<"The Weight Of PigA Is "<<PigA<<endl;

    cout<<"Please Enter The Weight Of PigB"<<endl;  
    cin>>PigB;
    cout<<"The Weight Of PigB Is "<<PigB<<endl;
    cout<<"Please Enter The Weight Of PigC"<<endl;
    cin>>PigC;
    cout<<"The Weight Of PigC Is "<<PigC<<endl;

    if (PigA > PigB)
    {
        /* code */
        if (PigA > PigC)
        {
            /* code */
            cout<<"PigA Is The Heaviest"<<endl;
        }
        else
        {
            cout<<"PigC Is The Heaviest"<<endl;
        }
    }
    
    else 
    {
        if (PigB > PigC)
        {
            cout<<"PigB Is The Heaviest"<<endl;
        }
        else
        {
            /* code */  
            cout<<"PigC Is The Heaviest"<<endl;
        }
        


    }

    system("pause");
    return 0;


}