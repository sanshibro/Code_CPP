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
    //��ʼ��  �������
    //ShowMenu();
    //��ʼ��ͨѶ¼
    Addressbook_Init(addressBook);
    ShowMenu();
    while (1) {
        
        SwitchFun();
        
    }
    //system("pause");
    return 0;
}