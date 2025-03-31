#include <iostream>
//#include <istream>
using namespace std;
#include "person.hpp"

void test(){
    Person<string,int> s1("zhagnsan",10);
    s1.showPerson();


}



int main(){

    test();


    return 0;
}