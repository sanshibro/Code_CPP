#include <iostream>
#include <string>
#include "FindConnect.h"
#include "TONGXUNLU.h"
extern AddressBook addressBook;
using namespace std;
// 面板显示程序
void ShowMenu() {
	cout << "**************************" << std::endl;
	cout << "***** 1.添加联系人 *******" << std::endl;
	cout << "***** 2.显示联系人 *******" << std::endl;
	cout << "***** 3.删除联系人 *******" << std::endl;
	cout << "***** 4.查找联系人 *******" << std::endl;
	cout << "***** 5.修改联系人 *******" << std::endl;
	cout << "***** 6.清空联系人 *******" << std::endl;
	cout << "**************************" << std::endl;
}

void ADDConnect(AddressBook& add) {
	if (add.m_size == MAX) {
		cout << "通讯录已满，无法添加" << endl;
	}
	else {
		cout << "请输入姓名" << endl;
		cin >> add.personArray[add.m_size].name;
		cout << "请输入年龄" << endl;
		cin >> add.personArray[add.m_size].age;
		cout << "请输入性别" << endl;
		cout << "1 男 2 女" << endl;
		int sex = 0;
		while (true)
		{
			if (add.personArray[add.m_size].sex == 1 || add.personArray[add.m_size].sex == 2)
			{
				break;
			}
			else
			{
				cout << "输入有误 请重新输入" << endl;
				cin >> add.personArray[add.m_size].sex;
			}
		}
		cout << "请输入电话" << endl;
		cin >> add.personArray[add.m_size].phone;
		cout << "请输入地址" << endl;
		cin >> add.personArray[add.m_size].address;
		add.m_size++;
		system("pause");
		system("cls");
	}
}
void ShowConnect(AddressBook& show) {
	if (show.m_size == 0) {
		cout << "通讯录为空" << endl;


	}
	else {
		for (int i = 0; i < show.m_size; i++) {
			string sex1;
			if (show.personArray[i].sex == 1) {
				sex1 = "男";
			}
			else {
				sex1 = "女";
			}
			cout << "姓名：" << show.personArray[i].name << " 年龄：" << show.personArray[i].age << " 性别：" << sex1 << endl;
			cout << "电话：" << show.personArray[i].phone << " 地址：" << show.personArray[i].address << endl;



		}

	}
	system("pause");
	system("cls");
}
void FindteConnect(AddressBook& find) {
	cout << "请输入要查询的姓名" << endl;
	string findstr;
	cin >> findstr;
	bool kaiguan = false;
	for (int i = 0; i < find.m_size;i++)
	{
		if (find.personArray[i].name == findstr)
		{
			string sex1;
			if (find.personArray[i].sex == 1) {
				sex1 = "男";
			}
			else {
				sex1 = "女";
			}
			cout << "您的联系人存在于通讯录中 其信息为：" << endl;
			cout << "姓名：" << find.personArray[i].name << " 年龄：" << find.personArray[i].age << endl;

			cout << "电话：" << find.personArray[i].phone << " 地址：" << find.personArray[i].address << endl;
			cout << "性别" << sex1 << endl;
			kaiguan = true;

		}
		
	
	
	}

	switch (kaiguan)
	{
	case 1: cout << "查找完毕" << endl; break;
	case 2: cout << "查无此人" << endl; break;

	}

	system("pause");
	system("cls");



}

int  IsExist(AddressBook& find) {
	cout << "请输入要删除的姓名" << endl;
	string findstr;
	cin >> findstr;
	bool kaiguan = false;
	for (int i = 0; i < find.m_size;i++)
	{
		if (find.personArray[i].name == findstr)
		{
			return i;

		}
		
	}
	return -1;





}
void FindConnect(AddressBook& find,int a) {
	if (a != -1)
	{
		find.personArray[a] = find.personArray[find.m_size + 1];
		find.m_size--;  //这个是我没想到的
		cout << "删除完毕" << endl;
	}
	else {
		cout << "查无此人" << endl;
	}
	system("pause");
	system("cls");
	



	



}

//6、清空所有联系人
void cleanPerson(AddressBook & qingkong)
{
	qingkong.m_size= 0;
	cout << "通讯录已清空" << endl;
	system("pause");
	system("cls");
}

void SwitchFun() {
	int select = 0;
	
	cin >> select;

	switch (select) {
	case 1:
		cout << "添加联系人" << endl;
		ADDConnect(addressBook);
		break;
	case 2:
		cout << "显示联系人" << endl;
		ShowConnect(addressBook);
		break;
	case 3:
		cout << "删除联系人" << endl;
	
		FindConnect(addressBook, IsExist(addressBook));

		break;
	case 4:
		cout << "查找联系人" << endl;
		FindteConnect(addressBook);
		break;
	case 5:
		cout << "修改联系人" << endl;
		break;
	case 6:
		cout << "清空联系人" << endl;
		cleanPerson(addressBook);
		break;
	default:
		cout << "没有该指令 输入有无 请重新输入";
		system("pause");
		system("cls");
		break;
	
	
	
	
	
	
	}
	ShowMenu();

}