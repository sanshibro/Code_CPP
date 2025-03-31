#include <iostream>
using namespace std;
#include <fstream>


int main(){
    char buf[1024] = {0};

    ifstream file;
    file.open("file.txt",ios::in);
    if(!file.is_open()){
        cout<<"Error opening file"<<endl;
        return 1;
    }
    while(file >> buf)
    {
        cout<<buf<<endl;
    }

    file.close();








    system("pause");
    return 0;
}
