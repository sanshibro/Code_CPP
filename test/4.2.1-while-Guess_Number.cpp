#include <iostream>
using namespace std;
#include <cstdlib>
#include <ctime>


int main() {
    //create a random number from 0 to 100
    //if we don't add one , the range for this code will from 0 to 99

    srand((unsigned int)time(0));
    short random = rand() % 100 + 1;
    short guess = 0;
   // short right_number = 45;
    cout<<"the random number is "<<random<<endl;
    cout<<"Please Enter Your Guess Number"<<endl;
    //cin>>guess;
    while(guess!=random){
        cout<<"Please Enter Your Guess Number"<<endl;
        cin>>guess;

        if (guess>random)
        {
            cout<<"Your Guess Number Is Too Big"<<endl;
        }
        else if (guess<random)
        {
            cout<<"Your Guess Number Is Too Small"<<endl;
        }
        //或者用while1 和break
    
    }
    cout<<"Congratulations! You Got The Right Number"<<endl;


    system("pause");
    return 0;
}
