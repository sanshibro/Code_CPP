#include <iostream>
using namespace std;
#include "FindConnect.h"
#include "TONGXUNLU.h"

AddressBook addressBook;
using namespace std;





void Addressbook_Init(AddressBook &addressBook) {
    addressBook.m_size = 0;
}

int main() {
    //初始化  创建面板
    //ShowMenu();
    //初始化通讯录
    Addressbook_Init(addressBook);
    ShowMenu();
    while (1) {
        
        SwitchFun();
        
    }
    //system("pause");
    return 0;
}