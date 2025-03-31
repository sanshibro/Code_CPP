#include <iostream>
#include <string>
#include "FindConnect.h"
#include "TONGXUNLU.h"
extern AddressBook addressBook;
using namespace std;
// �����ʾ����
void ShowMenu() {
	cout << "**************************" << std::endl;
	cout << "***** 1.�����ϵ�� *******" << std::endl;
	cout << "***** 2.��ʾ��ϵ�� *******" << std::endl;
	cout << "***** 3.ɾ����ϵ�� *******" << std::endl;
	cout << "***** 4.������ϵ�� *******" << std::endl;
	cout << "***** 5.�޸���ϵ�� *******" << std::endl;
	cout << "***** 6.�����ϵ�� *******" << std::endl;
	cout << "**************************" << std::endl;
}

void ADDConnect(AddressBook& add) {
	if (add.m_size == MAX) {
		cout << "ͨѶ¼�������޷����" << endl;
	}
	else {
		cout << "����������" << endl;
		cin >> add.personArray[add.m_size].name;
		cout << "����������" << endl;
		cin >> add.personArray[add.m_size].age;
		cout << "�������Ա�" << endl;
		cout << "1 �� 2 Ů" << endl;
		int sex = 0;
		while (true)
		{
			if (add.personArray[add.m_size].sex == 1 || add.personArray[add.m_size].sex == 2)
			{
				break;
			}
			else
			{
				cout << "�������� ����������" << endl;
				cin >> add.personArray[add.m_size].sex;
			}
		}
		cout << "������绰" << endl;
		cin >> add.personArray[add.m_size].phone;
		cout << "�������ַ" << endl;
		cin >> add.personArray[add.m_size].address;
		add.m_size++;
		system("pause");
		system("cls");
	}
}
void ShowConnect(AddressBook& show) {
	if (show.m_size == 0) {
		cout << "ͨѶ¼Ϊ��" << endl;


	}
	else {
		for (int i = 0; i < show.m_size; i++) {
			string sex1;
			if (show.personArray[i].sex == 1) {
				sex1 = "��";
			}
			else {
				sex1 = "Ů";
			}
			cout << "������" << show.personArray[i].name << " ���䣺" << show.personArray[i].age << " �Ա�" << sex1 << endl;
			cout << "�绰��" << show.personArray[i].phone << " ��ַ��" << show.personArray[i].address << endl;



		}

	}
	system("pause");
	system("cls");
}
void FindteConnect(AddressBook& find) {
	cout << "������Ҫ��ѯ������" << endl;
	string findstr;
	cin >> findstr;
	bool kaiguan = false;
	for (int i = 0; i < find.m_size;i++)
	{
		if (find.personArray[i].name == findstr)
		{
			string sex1;
			if (find.personArray[i].sex == 1) {
				sex1 = "��";
			}
			else {
				sex1 = "Ů";
			}
			cout << "������ϵ�˴�����ͨѶ¼�� ����ϢΪ��" << endl;
			cout << "������" << find.personArray[i].name << " ���䣺" << find.personArray[i].age << endl;

			cout << "�绰��" << find.personArray[i].phone << " ��ַ��" << find.personArray[i].address << endl;
			cout << "�Ա�" << sex1 << endl;
			kaiguan = true;

		}
		
	
	
	}

	switch (kaiguan)
	{
	case 1: cout << "�������" << endl; break;
	case 2: cout << "���޴���" << endl; break;

	}

	system("pause");
	system("cls");



}

int  IsExist(AddressBook& find) {
	cout << "������Ҫɾ��������" << endl;
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
		find.m_size--;  //�������û�뵽��
		cout << "ɾ�����" << endl;
	}
	else {
		cout << "���޴���" << endl;
	}
	system("pause");
	system("cls");
	



	



}

//6�����������ϵ��
void cleanPerson(AddressBook & qingkong)
{
	qingkong.m_size= 0;
	cout << "ͨѶ¼�����" << endl;
	system("pause");
	system("cls");
}

void SwitchFun() {
	int select = 0;
	
	cin >> select;

	switch (select) {
	case 1:
		cout << "�����ϵ��" << endl;
		ADDConnect(addressBook);
		break;
	case 2:
		cout << "��ʾ��ϵ��" << endl;
		ShowConnect(addressBook);
		break;
	case 3:
		cout << "ɾ����ϵ��" << endl;
	
		FindConnect(addressBook, IsExist(addressBook));

		break;
	case 4:
		cout << "������ϵ��" << endl;
		FindteConnect(addressBook);
		break;
	case 5:
		cout << "�޸���ϵ��" << endl;
		break;
	case 6:
		cout << "�����ϵ��" << endl;
		cleanPerson(addressBook);
		break;
	default:
		cout << "û�и�ָ�� �������� ����������";
		system("pause");
		system("cls");
		break;
	
	
	
	
	
	
	}
	ShowMenu();

}