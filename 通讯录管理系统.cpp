#include<iostream>
#include<string>
#include"showMenu.h"
#include"addPerson.h"
#include"showPerson.h"
#include"deletePerson.h"
#include"findPerson.h"
#include"modifyPerson.h"
#include"blankBook.h"
#include"struct_ptp.h"
using namespace std;

int main() {
	//�˵�����
	Addressbooks abs ;
	abs.m_Size=0 ;
	int select = 0;
	while (true) {
		showMenu();
		cin >> select;
		switch (select)
		{
		case 1://1�������ϵ��
			addPerson(&abs);
			break;
		case 2://2����ʾ��ϵ��
			showPerson(&abs);
			break;
		case 3://3��ɾ����ϵ��
			deletePerson(&abs);
			break;
		case 4://4��������ϵ��
			findPerson(&abs);
			break;
		case 5://5���޸���ϵ��
			modifyPerson(&abs);
			break;
		case 6://6�������ϵ��
			blankBook(&abs);
			break;
		case 0://0���˳�ͨѶ¼
			cout << "�ټ�����ӭ�´�ʹ��" << endl;
			//cout << abs.personArray[abs.m_Size].m_Name << endl;
			return 0;
			break;
		default:
			break;
		}
	}
	
	system("pause");
	return 0;
}


